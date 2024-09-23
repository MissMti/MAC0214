#include <bits/stdc++.h>

using namespace std;

#define int long long




signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s="";

    string tmp;
    cin>>tmp;

    for(int i=0;i<tmp.size();i++){
        if(tmp[i]!='.'){
            s+=tmp[i];
        }
    }

    cout<<s<<"\n";
 
 
    return 0;

}
