
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15

vector<int> a,b;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,q;
    cin>>n>>q;

    a.push_back(0);
    for(int i=0;i<n;i++){
        a.push_back(i); //controle do indice 0 0 1 2 3 4
        b.push_back(i+1); //as bolas em si 1 2 3 4 5
    }


    int tmp,x;
    for(int i=0;i<q;i++){
        cin>>tmp;
        x=a[tmp]; //pos da troca

        if(x< n-1){
            a[tmp]= x+1;
            a[b[x+1]]=x;
            swap(b[x],b[x+1]);

        }
        else{
            a[tmp]= x-1;
            a[b[x-1]]=x;
            swap(b[x],b[x-1]);
        }

    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
