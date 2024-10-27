
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15

vector<int> a;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
    }

    vector<vector<int>> b(k);

    for(int i=0;i<n;i++){
        b[i%k].push_back(a[i]);
    }

    for(int i = 0;i<k;i++){
        sort(b[i].begin(), b[i].end());
    }
        
    vector<int> s(n);
    for(int i=0;i<n;i++){
        s[i]=b[i%k][i/k];
    }
        
    int tmp=s[0];
    for(int i=0;i<n;i++){
        if(tmp>s[i]){
            cout<<"No\n";
            return 0;
        }
        tmp=s[i];
    }
    
    cout<<"Yes\n";

    return 0;
}
