#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> a,b;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;

    int soma=0;
    for(int i=0;i<n;i++){
        int ta,tb;
        cin>>ta>>tb;
        a.push_back(ta);
        b.push_back(tb);
        soma+=tb;
    }

    //cout<<soma<<"\n";

    if(soma%3!=0){
        cout<<-1<<"\n";
        return 0;
    }



	int inf = INT_MAX;
	vector<vector<vector<int>>> dp(505, vector<vector<int>>(505, vector<int>(505,INT_MAX)));
	dp[0][0][0] = 0;

	for(int i=0;i<n;i++) {
		for(int j=0;j<501;j++) {
			for(int k=0;k<501;k++){
				if(a[i] == 1){
                    if(j+b[i]<501){
                        dp[i+1][j+b[i]][k] = min(dp[i+1][j+b[i]][k], dp[i][j][k]);
                    }
                    if(k+b[i]<501){
                        dp[i+1][j][k+b[i]] = min(dp[i+1][j][k+b[i]], dp[i][j][k]+1);
                    }
                    dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]+1);
                }
                else {
                    if(a[i] == 2){
                        if(j+b[i]<501){
                            dp[i+1][j+b[i]][k] = min(dp[i+1][j+b[i]][k], dp[i][j][k]+1);
                        }
                        if(k+b[i]<501){
                            dp[i+1][j][k+b[i]] = min(dp[i+1][j][k+b[i]], dp[i][j][k]);
                        }
                        dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]+1);
                    }
                    else if(a[i] == 3){
                        if(j+b[i]<501){
                            dp[i+1][j+b[i]][k] = min(dp[i+1][j+b[i]][k], dp[i][j][k]+1);
                        }
                        if(k+b[i]<501){
                            dp[i+1][j][k+b[i]] = min(dp[i+1][j][k+b[i]], dp[i][j][k]+1);
                        }
                        dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
                    }
                }
                
			}
		}
	}

	int rsp = dp[n][soma/3][soma/3];
    if(rsp==INT_MAX){
        cout<<"-1\n";
        return 0;
    }

	cout <<rsp << '\n';


    return 0;
}
