#include <bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,s,m;
        cin>>n>>s>>m;
        int l,r=0,sim=-1;
        cin>>l;
        for(int j=0;j<n-1;j++){
            //cout<<l-r<<" "<<s<<endl;
            if(l-r>=s){
                sim=1;
            }
            cin>>r;
            cin>>l;
        }
        if(l-r>=s){
            sim=1;
        }
        cin>>r;
        if(m-r>=s){
            sim=1;
        }

        if(sim==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
}
