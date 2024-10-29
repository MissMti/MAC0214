#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

int dp[1000010];


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x;

	cin>>n>>x;

	vector<int> a(n);

	for (int i = 0; i < n; i++) { 
        cin >> a[i]; 
    }

	dp[0] = 1;

	for (int w = 0; w <= x; w++) {
		for (int i = 1; i <= n; i++) {
			if (w - a[i - 1] >= 0) {
				dp[w]=(dp[w]+dp[w - a[i - 1]])%MOD;
			}
		}
	}

	cout << dp[x] << "\n";

    return 0;
}
