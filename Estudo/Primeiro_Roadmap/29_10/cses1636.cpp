#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

int dp[1000010];
int a[105];

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x;

	cin>>n>>x;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j <= x; j++) {
            dp[j] = (dp[j] + dp[j - a[i]]) % MOD;
        }
    }

    cout<< dp[x]<<"\n";

    return 0;
}
