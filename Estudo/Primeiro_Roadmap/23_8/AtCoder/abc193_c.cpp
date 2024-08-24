#include <bits/stdc++.h>
using namespace std;

#define int long long

long long MAX=1000000007;

signed main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);cout.tie(nullptr);

    int n;
    cin>>n;

    unordered_set<int> rsp; 

    for(int i=2;i<=100000 || i*i<=n; i++){
        int aux=i*i;
        while(aux<=n){
            rsp.insert(aux);
            aux=aux*i;
        }
    }

    cout<<n-rsp.size()<<"\n";
    
    return 0;
}
