#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Man 1e15

map<int,int> mp;

int funcao(int n){
    if(n==0) return 1;
    if(mp.count(n)) return mp[n];
    mp[n]=funcao(n/2)+funcao(n/3);
    return mp[n];
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin>>n;

    cout<<funcao(n)<<"\n";

    return 0;
}
