#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<vector<int>> a(100005);


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,max=0,soma=0,h,w;
    cin>>h>>w;
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int tmp;
            cin>>tmp;
            a[i].push_back(tmp);
        }
    }

    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
 
    return 0;

}
