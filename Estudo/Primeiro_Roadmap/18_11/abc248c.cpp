#include <bits/stdc++.h>

using namespace std;

#define int long long
#define MAX 1e18
#define MOD 998244353//1000000007

vector<vector<int>> dp(100,vector<int>(5000));

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n,m,k,rsp=0;
    cin>>n>>m>>k;

    

    dp[0][0]=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<=k;j++){
            for (int l=1;l<=m;l++){
                if (j+l<=k){
                    dp[i+1][j+l]=(dp[i+1][j+l]+dp[i][j])%MOD;
                }
                
            }
        }
    }
    for (int i=0;i<=k;i++){
        rsp=(rsp+dp[n][i])%MOD;
    }
    
    cout<<rsp<<"\n";

    return 0;
}
