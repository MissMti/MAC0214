#include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s,t;
        cin>>s>>t;
        int tam=s.length();
        int tamt=t.length();
        int aux=0;
        string rsp="";

        for(int j=0;j<tam;j++){
            if(s[j]==t[aux]){
                rsp=rsp+t[aux];
                aux++;
            }
            else{
                if(s[j]=='?'){
                    if(aux<tamt){
                        rsp=rsp+t[aux];
                        aux++;
                    }
                    else{
                        rsp=rsp+'m';
                    }
                }
                else{
                    rsp=rsp+s[j];
                }
            }
        }

        if(aux==tamt){
            cout<<"YES\n";
            cout<<rsp<<"\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    
}

