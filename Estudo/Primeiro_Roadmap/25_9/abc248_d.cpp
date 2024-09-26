#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<vector<int>> a(200005);



void queries(){
    int l,r,x;
    cin>>l>>r>>x;
    cout<<upper_bound(a[x].begin(),a[x].end(),r)-lower_bound(a[x].begin(),a[x].end(),l)<<"\n";
}


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int tmp;
        cin >> tmp;
        a[tmp].push_back(i);
    }

    int q;
    cin>>q;

    for(int i=0;i<q;i++){
        queries();
    }
 
    return 0;

}
