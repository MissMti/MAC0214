#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string s,t;
    cin>>s>>t;
    int i=0;

    while(i<=min(s.size(),t.size())){
        if(s[i]!=t[i]){
            cout<<i+1<<"\n";
            return 0;
        }
        i++;
    }
    if(s.size()!=t.size()){
        cout<<i+1<<"\n";
    }
    else{
        cout<<"0\n";
    }

    return 0;

}


