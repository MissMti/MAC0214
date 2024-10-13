#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10

char a[3005][3005];
char b[3005][3005];

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string s;
    cin>>s;

    vector<vector<int>> soma(30,vector<int> (s.size()+1));

    for(int i=0;i<s.size();i++){
        for(int j=0;j<26;j++){
            soma[j][i+1]=soma[j][i];
        }
        soma[s[i]-'A'][i+1]++;
    }

    int rsp=0;
    for(int i=1;i<s.size()-1;i++){
        for(int j=0;j<26;j++){
            rsp+=(soma[j][i])*(soma[j][s.size()]-soma[j][i+1]);
        }
    }

    cout<<rsp<<"\n";

    return 0;
}
