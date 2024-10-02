
#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10

vector<pair<int,int>> a;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int q;
    cin>>q;

    int ini=0;
    for(int i=0;i<q;i++){
        int n,x,c;
        cin>>n;
        if(n==1){
            cin>>x>>c;
            a.push_back(make_pair(x,c));
        }
        else{
            cin>>c;
            int rsp=0;
            while(c!=0){
                if(c>=a[ini].second){
                    rsp+=a[ini].first*a[ini].second;
                    c-=a[ini].second;
                    ini++;
                }
                else{
                    rsp+=a[ini].first*c;
                    a[ini].second-=c;
                    c=0;
                }
            }
            cout<<rsp<<"\n";

        }
    }
 
    return 0;

}

