#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> a;


signed main() {

    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s;
    cin>>s;

    int l[30];
    for(int i=0;i<s.size();i++){
        l[s[i]-'A']=i;
    }

    int soma=0;
    for(int i=0;i<s.size()-1;i++){
        soma+=abs(l[i+1]-l[i]);
    }

    cout<<soma<<"\n";
 
    return 0;

}
