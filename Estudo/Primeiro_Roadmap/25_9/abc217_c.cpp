#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> a(200005);
vector<int> b(200005);

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,max=0,soma=0,h,w;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        b[a[i]]=i;
    }

    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    
    cout<<"\n";
 
    return 0;

}
