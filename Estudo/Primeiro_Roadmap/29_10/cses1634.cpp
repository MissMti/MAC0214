#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Man 1e15

int dp[1000001];


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x;

	cin>>n>>x;

	vector<int> a(n);

	for (int i = 0; i < n; i++) { 
        cin >> a[i];
    }


	for (int i = 0; i <= x; i++) { 
        dp[i] = INT_MAX; 
    }

	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int w=a[i-1]; w<=x; w++) {
			dp[w] = min(dp[w], dp[w-a[i-1]]+1);
		}
	}

    if(dp[x]==INT_MAX){
        cout<<"-1\n";
        return 0;
    }


	cout << dp[x] << "\n";

    return 0;
}
