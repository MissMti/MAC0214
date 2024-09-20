#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> A;
map<int,vector<int>> mp;

void solve(){
    int x,k;
    cin>>x>>k;
    if(mp[x].size()>=k){
        cout<<mp[x][k-1]<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,q;
    cin>>n>>q;

    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        A.push_back(tmp);
    }

    for(int i=0;i<n;i++){
        mp[A[i]].push_back(i+1);
    }

    for(int i=0;i<q;i++){
        solve();
    }   

    return 0;

}
