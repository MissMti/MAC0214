#include <bits/stdc++.h>
using namespace std;

#define int long long


signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int n,q;
    string p;
    cin>>n>>q>>p;

    int tmp,x,y=0;
    for(int i=0;i<q;i++){
        cin>>tmp>>x;
        if(tmp==1){
            y=(y+x)%n;
        }
        else{
            cout<<p[(n+x-y-1)%n]<<"\n";
        }
    }
    
    return 0;
}
