#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10

vector<int> a(5000005);

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string s;
    cin>>n>>s;

    int soma=0;
    for(int i=0;i<n-2;i++){
        if(s[i]=='#' && s[i+2]=='#' && s[i+1]=='.'){
            soma++;
        }
    }

    cout<<soma<<"\n";

    return 0;
}

