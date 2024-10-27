#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,q;
    cin>>n>>q;

    int l=1,r=2,rsp=0;
    for(int i=0;i<q;i++){
        char h; int t; cin >> h >> t;
        if(h == 'R'){
            if(r == t) continue;
            if(t>l && t<r || r>t && r<l){
                rsp+=r-t;
            } 
            else {
                if(l<r && l>t) {
                    rsp+=t-r+n;
                }
                else{
                    if(r>l && r<t || t>r && t<l){
                        rsp+=t-r;
                    } 
                    else{
                        if(l>r && l<t){
                            rsp+=r-t+n;
                        } 
                    }
                }
            }

            r = t;
        }
        else{
            if(l == t) continue;
            if(t>r && t<l || l>t && r>l){
                rsp+=l-t;
            } 
            else {
                if(r<l && r>t) {
                    rsp+=t-l+n;
                }
                else{
                    if(l>r && l<t || t>l && t<r){
                        rsp+=t-l;
                    } 
                    else{
                        if(r>l && r<t){
                            rsp+=l-t+n;
                        } 
                    }
                }
            }
            l = t;
        }
    }
    cout<<rsp<<"\n";
    
    return 0;
}
