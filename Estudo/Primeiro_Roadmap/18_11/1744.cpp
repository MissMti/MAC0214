#include <bits/stdc++.h>

using namespace std;

#define int long long
#define MAX 1e18
#define MOD 998244353//1000000007

vector<vector<int>> dp(550,vector<int>(550,MAX));

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a,b;
    cin>>a>>b;

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            if (i==j) {
                dp[i][j]= 0;
            }
            else {
                for (int k=1;k<j; k++) {
                    dp[i][j]=min(dp[i][j],dp[i][k] + dp[i][j -k] + 1);
                }
                for (int l=1; l < i; l++) {
                    dp[i][j]= min(dp[i][j],dp[l][j] + dp[i- l][j] + 1);
                }
            }
        }
    }

    cout<<dp[a][b]<<"\n";

    return 0;
}
