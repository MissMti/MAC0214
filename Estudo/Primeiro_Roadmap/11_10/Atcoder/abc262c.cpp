#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10

vector<int> a(5000005);

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,c=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==i){
            c++;
        }
    }
    int rsp=c*(c-1)/2;

    for(int i = 1; i <= n; i++){
        if(a[i] != i){
            if(a[a[i]] == i && a[i] > i){
                rsp++;
            }
        }
    }
    cout << rsp<<"\n";

    return 0;
}
