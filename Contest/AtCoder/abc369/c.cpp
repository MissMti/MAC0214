#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

vector<int> v(200010);

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; 
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> v[i];
    }

    int l = 0, atu = v[1]-v[0], rsp = 1;
    for(int i=1;i<n;i++){
        int tmp = v[i] - v[i-1];
        if (tmp != atu) {
            atu = tmp;
            l = i-1;
            rsp += 2;
        } 
        else {
            rsp += i-l+1;
        }
    }

    cout << rsp << endl;

    return 0;
}
