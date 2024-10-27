#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;

    vector<int> a(n);
    multiset<int> b;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 1; i < n; i++){
        int x;
        cin >> x;
        b.insert(x);
    }

    sort(a.begin(), a.end());

    int rsp = -1;
    for (int i = n - 1; i >= 0; i--){
        auto it = b.lower_bound(a[i]);
        if (it != b.end()){

            b.erase(it);
            
        }
        else{
            if (rsp == -1){
                rsp = a[i];
            }
            else{
                rsp = -1;
                break;
            }
        }
    }

    cout << rsp << endl;
    
    return 0;
}
