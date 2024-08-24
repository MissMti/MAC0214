#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main (){
    int n,k;
    int a[150];
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=n-k+1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=1;i<n-k+1;i++){
        cout<<a[i]<<" ";
    }

    cout<<"\n";

}
