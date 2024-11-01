#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a,b;
    cin>>a>>b;
    int rsp=3;
    if((a+b)%2==1){
        rsp=2;
    }
    if(a==b){
        rsp=1;
    }

    cout<<rsp<<"\n";

    return 0;
}

