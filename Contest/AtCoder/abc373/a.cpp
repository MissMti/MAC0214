#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> a;


signed main() {

    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s;
    int soma=0;
    for(int i=1;i<=12;i++){
        cin>>s;
        if(s.size()==i){
            soma++;
        }
    }

    cout<<soma<<"\n";
 
    return 0;

}
