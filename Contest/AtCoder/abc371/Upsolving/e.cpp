#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> A;
vector<vector<int>> p(200005);
map<int, int> mp;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;


    int rsp=0,tmp=0;

    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        tmp = tmp + i- mp[a];
        rsp += tmp;
        mp[a] = i ;
    }

    cout<<rsp<<"\n";

    return 0;

}
