#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string s;
    cin>>n;

    int rsp=0;
    for(int a=1;a*a*a<=n;a++){
        for(int b=a;b<=sqrt(n/a);b++){
            rsp+=n/(a*b)-b+1;
        }
    }
 
    cout<<rsp<<"\n";

    return 0;

}

