#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,w,a,b;
    cin>>n>>w;
    vector<pair<int,int>> p;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        p.push_back(make_pair(a,b));
    }

    sort(p.begin(),p.end());

    int rsp=0,aux=n-1;

    while(w>0 && aux>=0){
        rsp=rsp+p[aux].first*min(p[aux].second,w);
        w=w-min(p[aux].second,w);
        aux--;

    }

    cout<<rsp<<"\n";
    
    return 0;
}
