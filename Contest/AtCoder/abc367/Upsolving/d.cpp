#include <bits/stdc++.h>
using namespace std;

#define int long long

long long MAX=1000000007;

signed main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);cout.tie(nullptr);

    int n,m,aux;
    cin >> n >> m;

    vector<int> a;
    for(int  i=1;i<=n;i++){
        cin>>aux;
        a.push_back(aux);
    }

    vector<int> r={0};//fazer o dobro de tamanho para ser mais facil...
    r.push_back(0);
    for(int i=1;i<2*n+1;i++){
        r.push_back((r.back()+a[i%n])%m);
    }

    /*for(int i=0;i<2*n+1;i++){
        cout<<r[i]<<" ";
    }
    cout<<"\n";*/

    vector<int> b(m,0);//tem como mudar isso aqui?
    for(int i=1;i<n+1;i++){
        b[r[i]]++;//ocorrencias do mod 
    }

    /*for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";*/

    long long rsp=0;
    for(int i=n+1;i<2*n+1;i++){
        b[r[i-n]]--;
        rsp+=b[r[i]];
        b[r[i]]++;
    }

    cout << rsp << "\n";
    return 0;
}
