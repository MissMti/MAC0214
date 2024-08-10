#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t; cin >> t;
    long long qtd[200005];
    long long somas[200005];

    int j,k=3,cont=1;
    for(int i=1;i<=200000;i++){
        for(j=i;j<k && j<=200000;i++,j++){
            qtd[i]=cont;
        }
        i--;
        cont++;
        k=k*3;
        
    }
    somas[0]=0;
    for(int i=1;i<=200000;i++){
        somas[i]=somas[i-1]+qtd[i];
    }

    for (int i = 0; i < t; i++) {
        int l,r;
        cin>>l>>r;
        long long rsp=somas[r]-somas[l-1]+qtd[l];
        //cout<<somas[r]<<", "<<somas[l-1]<<", "<<qtd[l]<<", ";
        cout<<rsp<<"\n";
    }
}
