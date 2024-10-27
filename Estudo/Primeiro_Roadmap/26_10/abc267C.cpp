
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15

vector<int> a,b;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;

    b.push_back(0);
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
        b.push_back(b[i]+tmp);
    }

    int s=0;
    for(int i=0;i<m;i++) {
        s += a[i]*(i+1);
    }

    int rsp = s;
    for(int i = 0; i < n - m; i++) {
        s = s - (b[i + m] - b[i]) + m *a[i + m];
        rsp = max(rsp, s);
    }

    cout << rsp << "\n";
    
    return 0;
}
