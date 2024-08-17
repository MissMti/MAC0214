#include <bits/stdc++.h>
using namespace std;

#define int long long

long long MAX=1000000007;

signed main() {
    int a,b,c;\
    cin>>a>>b>>c;
    if(b<c){
        if (a>c || a<b){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    else{
        if (a>c && a<b){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    
}
