#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

char campo [1005][1005];
int dp [1005][1005];

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, x;

	cin>>n;



	vector<int> a(n);

	for (int i = 0; i < n; i++) { 
        for(int j=0;j<n;j++){
            cin>>campo[i][j];
        }
    }



	//dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        if (campo[i][0] == '*')
            break;
        dp[i][0] = 1;
    }

    for (int j = 0; j < n; j++) {
        if (campo[0][j] == '*')
            break;
        dp[0][j] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (campo[i][j] == '.'){
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

	cout << dp[n-1][n-1] << "\n";   

    return 0;
}
