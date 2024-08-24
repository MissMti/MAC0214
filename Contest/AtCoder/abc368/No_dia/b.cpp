#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main (){
    int n,k;
    vector<int> a;
    cin>>n;
    int aux;
    for(int i=0;i<n;i++){
        cin>>aux;
        a.push_back(aux);
    }

    sort(a.begin(),a.end());
    aux=0;
    while(a[n-2]!=0){
        a[n-2]--;
        a[n-1]--;
        sort(a.begin(),a.end());
        aux++;
    }

    cout<<aux<<"\n";

}
