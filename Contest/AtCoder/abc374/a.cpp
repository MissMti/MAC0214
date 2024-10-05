#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string s;
    cin>>s;
    int i=s.size()-3;

        if(s[i]=='s' && s[i+1]=='a' && s[i+2]=='n'){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    

    return 0;

}


