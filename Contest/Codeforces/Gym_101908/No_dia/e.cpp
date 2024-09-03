#include <bits/stdc++.h>

#define oiee ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

using namespace std;

int rsp[10005];

signed main(){
    oiee;
    string n,m;
    cin>>n>>m;

    int total=n.size()-m.size();
    //cout<<"total: "<<total<<"\n";

    vector<int> a[30];

    for(int i=0;i<(int)n.size();i++){
        a[n[i]-65].push_back(i);
    }

    /*for(int i=0;i<28;i++){
        cout<<(char)(i+65)<<": ";
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }*/

    
   /* for(int i=0;i<total;i++){
        cout<<rsp[i]<<" ";
    }
    cout<<"\n";*/

    for(int i=0;i<(int)m.size();i++){
        for(int j=0;j<(int)a[m[i]-65].size();j++){
            
            if(a[m[i]-65][j]>total+i){
                break;
            }
            if(a[m[i]-65][j]>=i){
                rsp[a[m[i]-65][j]-i]=1;
            }
            
        }
    }


    int soma=0;
    for(int i=0;i<=total;i++){
        if(rsp[i]==0){
            soma++;
        }
       /*else{
            cout<<i<<"\n";
        }*/
    }
    cout<<soma<<"\n";


}
