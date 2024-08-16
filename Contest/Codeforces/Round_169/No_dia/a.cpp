#include <bits/stdc++.h>
#define int long long
using namespace std;

int arr[50];
int clo[50];
int resp, n;

bool checa(int x) {
    for (int i = 0; i < n; i++) {
        if (clo[i] < abs(x-arr[i])) {
            return false;
        }
    }
    return true;
}

void solve() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    clo[0] = abs(arr[0]-arr[1]);
    clo[n-1] = abs(arr[n-1]-arr[n-2]);
    for (int i = 1; i < n-1; i++) {
        int a = abs(arr[i-1]-arr[i]);
        int b = abs(arr[i+1]-arr[i]);
        clo[i] = min(a, b);
    }

    int ini = arr[0];
    int fim = arr[n-1];



    resp = false;
    for (int i = ini+1; i < fim; i++) {
        if (checa(i) and !binary_search(arr, arr+n, i)) {
            resp = true;
        }
    }

    if (resp) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

signed main() {
    int t; cin >> t;

    while (t--) {
        solve();
    }
} 
