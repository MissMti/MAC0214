#include <bits/stdc++.h>

using namespace std;

#define int long long





signed main() {

    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;

    int at=0;

    for(int i=0;i<n-2;i++){
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C'){
            at++;
        }
    }

    for(int i=0;i<q;i++){
        int p;
        char c;

        cin>>p>>c;
        p--;

        for(int j=0;j<3;j++){
            int ida=p-j;
            if(ida>=0&&ida<n-2){
                if(s[ida]=='A'&&s[ida+1]=='B'&&s[ida+2]=='C'){
                    at--;
                }
            }
        }

        s[p]=c;

        for(int j=0;j<3;j++){
            int ida=p-j;
            if(ida>=0&&ida<n-2){
                if(s[ida]=='A'&&s[ida+1]=='B'&&s[ida+2]=='C'){
                    at++;
                }
            }
        }

        cout<<at<<"\n";

    }
 
    return 0;

}

