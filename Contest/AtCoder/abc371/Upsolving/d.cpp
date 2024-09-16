#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> X;

int busca(int l){
    //cout<<"entra busca: "<<l<<"\n";
    int ini=0,fim=X.size();
    while(ini<fim-1){
        int meio=(fim+ini)/2;
        //cout<<ini<<" "<<meio<<" "<<fim<<"\n";
        if(X[meio]<l){
            ini=meio;
        }
        else{
            fim=meio;
        }
    }
    if(X[fim]==l){
        return fim;
    }
    return ini;
}


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    cin>>n;

    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        X.push_back(tmp);
    }

    int soma[n+5]={0};
    soma[0]=0;
    for(int i=0;i<n;i++){
        cin>>tmp;
        soma[i+1]=soma[i]+tmp;
    }

    int q, l, r;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        int pos=upper_bound(X.begin(),X.end(),l-1)-X.begin();
        int posi=upper_bound(X.begin(),X.end(),r)-X.begin();
        cout<<soma[posi]-soma[pos]<<"\n";
    }

    return 0;

}
