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


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,m,q;
    cin>>n>>m>>q;

    vector<vector<int>> a(m+5);
    for(int i=0;i<n;i++){
        a[0].push_back(i);
    }

    char b;
    int c,d;
    for(int i=0;i<q;i++){
        cin>>b>>c>>d;
        if(b=='s'){
            if(!a[c].empty()){
                int tmp=a[c][a[c].size()-1];
                a[c].pop_back();
                a[d].push_back(tmp);
            }            
        }
        else{
            if(a[c].size()>d){
                cout<<a[c][d]<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
    }
    
    return 0;
}
