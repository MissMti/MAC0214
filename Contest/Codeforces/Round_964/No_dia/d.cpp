#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t; cin >> s >> t;

    string resp = "";
    int p = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[p]) {
            resp += s[i];
            p++;
        }
        else if (s[i] != '?') {
            resp += s[i];
        }
        else {
            if (p < t.size()) {
                resp += t[p];
                p++;
            }
            else {
                resp += "x";
            }
        }
    }

    if (p < t.length()) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        cout << resp << "\n";
    }
}

signed main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}
