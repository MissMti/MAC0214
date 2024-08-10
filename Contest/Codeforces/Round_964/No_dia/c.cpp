    #include <bits/stdc++.h>
    using namespace std;
     
    void solve() {
        int n, s, m;
        cin >> n >> s >> m;
     
        int atu = 0;
        bool consegue = false;
        for (int i = 0; i < n; i++) {
            int l, r; cin >> l >> r;
     
            if (l-atu >= s) {
                consegue = true;
            }
            atu = r;
        }
     
        if (m-atu >= s) {
            consegue = true;
        }
     
        if (consegue) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
     
    signed main() {
        int t; cin >> t;
     
        for (int i = 0; i < t; i++) {
            solve();
        }
    }
