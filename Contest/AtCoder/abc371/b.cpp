#include <bits/stdc++.h>
using namespace std;

#define int long long

int fam[105];


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a;
        char b;
        cin>>a>>b;
        if(fam[a]==0 && b=='M'){
            cout<<"Yes\n";
            fam[a]=1;
        }
        else{
            cout<<"No\n";
        }
    }

    return 0;
}
