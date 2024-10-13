#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10


vector<int> p(55),g(55);

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        cin>>p[i];
    }

    for(int i=2;i<=n;i++){
        g[i]=g[p[i]]+1;
    }

    cout<<g[n]<<"\n";

    return 0;
}

