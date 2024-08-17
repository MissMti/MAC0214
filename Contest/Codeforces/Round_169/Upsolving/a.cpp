#include <bits/stdc++.h>
using namespace std;

#define int long long

long long MAX=1000000007;

void solve(){
    int n;
    int a [50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==2 && abs(a[0]-a[1])>1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}

signed main() {
    //ios::sync_with_stdio(0);
    //cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        solve();
    }

}
