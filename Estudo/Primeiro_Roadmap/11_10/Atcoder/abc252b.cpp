#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10


vector<int> a,b;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,k;

    cin>>n>>k;

    int max=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        if(max<x){
            max=x;
        }
    }

    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        b.push_back(x);
    }

    for(int i=0;i<k;i++){
        int x=b[i];
        if(a[x-1]==max){
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";


    return 0;
}
