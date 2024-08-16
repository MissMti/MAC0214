#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int l,r,L,R,rsp=1,ini=110,fim=110;
    cin>>l>>r;
    cin>>L>>R;
    int a[110];
    for(int i=0;i<105;i++){
        a[i]=0;
    }
    for(int i=l;i<=r;i++){
        a[i]+=1;
    }
    for(int i=L;i<=R;i++){
        a[i]+=2;
    }

    for(int i=0;i<=105;i++){
        if(a[i]==3){
            ini=i;
            while(a[i]==3){
                i++;
            }
            fim=i-1;
            break;
        }
    }

    if(ini!=110){
        rsp=fim-ini;
        if(a[ini-1]!=0){
            rsp++;
        }
        if(a[fim+1]!=0){
            rsp++;
        }
    }

    cout<<rsp<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;

    while (t--) {
        solve();
    }
} 
