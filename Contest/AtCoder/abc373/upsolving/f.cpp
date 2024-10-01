
#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,w;
    cin>>n>>w;

    vector<vector<int>> q(w+5);

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int mv=b-1;
        q[a].push_back(mv);

        int k=1;
        while(k*a + a<= w && mv < k * (b - (k + 1))+(b - (k + 1))){
            ++k;
			q[a].push_back(k*b-k*k-mv);
			mv = k*b-k*k;
        }
    }


    vector<int> dp(w + 1);
	for (int i = 1; i <= w; i++) {
		sort(q[i].begin(), q[i].end());
        vector<int> p(q[i].size()+5);
        for(int m=0;m<q[i].size();m++){
            p[m]=q[i][q[i].size()-1-m];
        }
        
		for (int j = 0; j < q[i].size() && j <= w / i; j++){
            for (int k = w; k >= i; k--){
                dp[k] = max(dp[k], dp[k - i] + p[j]);
            }
        }				
	}

	int rsp = 0;
	for (int i = 1; i <= w; i++){
        rsp=max(rsp,dp[i]);
    }
    

    cout<<rsp<<"\n";
 
    return 0;

}
