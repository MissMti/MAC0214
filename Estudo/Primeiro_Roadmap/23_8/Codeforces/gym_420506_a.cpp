#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<pair<int,int>> l;

int bin(int x){
    int p=0;
    int r=l.size();
    
    while(p<=r){
        int meio=(p+r)/2;
        if(l[meio].first==x){
            return meio;
        }
        if(l[meio].first<x){
            p=meio+1;
        }
        else{
            r=meio-1;
        }
    }
    return -1;
}

/*
pegar todos os q existem, cria um trocosoh para guardar as queries, lê as queries em ordem para colcoar forma...
setguarda a existencia caso exista e dessa forma fazer o vector soh com os q existe

*/
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int q,b;
    char a;
    cin>>q;
    
    vector<pair<char,int>> queries;
    vector<int> ex;
    

    for(int i=0;i<q;i++){
        cin>>a>>b;
        queries.push_back(make_pair(a,b));
        if(a=='a'){
            ex.push_back(b);
        }
    }

    sort(ex.begin(),ex.end());

    for(int i=0;i<ex.size();i++){
        l.push_back(make_pair(ex[i],0));
        while(ex[i]==ex[i+1]){
            i++;
            if(i==ex.size()){
                break;
            }
        }
    }

    /*for(int i=0;i<l.size();i++){
        cout<<l[i].first<<" ";
    }*/
    //cout<<endl;

    for(int i=0;i<q;i++){
        //cout<<queries[i].first<<" "<<bin(queries[i].second);
        if(queries[i].first=='a'){
            l[bin(queries[i].second)].second++;
        }
        if(queries[i].first=='t'){
            l[bin(queries[i].second)].second--;
        }
        if(queries[i].first=='c'){
            if(bin(queries[i].second)==-1){
                cout<<0<<"\n";
            }
            else{
                cout<<l[bin(queries[i].second)].second<<"\n";
            }
            
        }
    }

    
    return 0;
}
