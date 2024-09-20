#include <bits/stdc++.h>

using namespace std;

#define int long long

multiset<int> A;

void solve(){
    int n,x,k;
    cin>>n;
    if(n==1){//insere em A
        cin>>x;
        A.insert(x);
    }
    if(n==2){
        cin>>x>>k;
        if(k>A.size()){
            cout<<"-1\n";
        }
        else{
            auto it=A.upper_bound(x);
            if(it==A.begin()){
                cout<<"-1\n";
            }
            else{
                bool tmp=true;
                for(int i=0;i<k;i++){
                    if(it==A.begin()){
                        tmp=false;
                        break;
                    }
                    it--;
                }
                if(tmp){
                    cout<<(*it)<<"\n";
                }
                else{
                    cout<<"-1\n";
                }
            }
        }
        
    }
    if(n==3){
        cin>>x>>k;
        if(k>A.size()){
            cout<<"-1\n";
        }
        else{
            auto it=A.lower_bound(x);
            if(it==A.end()){
                cout<<"-1\n";
            }
            else{
                bool tmp=true;
                for(int i=0;i<k-1;i++){
                    it++;
                    if(it==A.end()){
                        tmp=false;
                        break;
                    }
                }
                if(tmp){
                    cout<<(*it)<<"\n";
                }
                else{
                    cout<<"-1\n";
                }
            }
        }
    }
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,x,q;
    cin>>q;

    for(int i=0;i<q;i++){
        solve();
    }

    

    return 0;

}
