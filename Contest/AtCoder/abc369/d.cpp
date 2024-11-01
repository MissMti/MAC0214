#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

vector<int> v(200010);
int dp[200010][2];

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; 
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    dp[0][1] = -INT_MAX;
    for(int i=1;i<=n;i++) {
        dp[i][0] = max(max(dp[i-1][0], (int)0), dp[i-1][1] + 2*v[i-1]);
        dp[i][1] = max(max(dp[i-1][0]+ v[i-1], (int)0), dp[i-1][1]);
    }
    cout << max(dp[n][0], dp[n][1]) << endl;

    return 0;
}
