#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

int dp[100005][105];
int a[100005];

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (a[i] == 0) {
                for (int j = 1; j<= m;j++){
                    dp[i][j] = 1;
                }
            }
            else {
                dp[i][a[i]] = 1;
            }
        }
        else {
            if (a[i] == 0) {
                for (int j = 1; j <= m; j++) {
                    dp[i][j] = (dp[i-1][j-1]+ dp[i-1][j]+ dp[i-1][j+1])% MOD;
                }
            }
            else {
                dp[i][a[i]] = (dp[i-1][a[i]-1]+ dp[i-1][a[i]]+ dp[i - 1][a[i] + 1]) % MOD;
            }
        }
    }

    int rsp = 0;

    for (int i = 1; i <= m; i++) {
        rsp = (rsp+dp[n-1][i])%MOD;
    }

    cout<<rsp<<"\n";

    return 0;
}

