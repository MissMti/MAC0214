#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> mult;
vector<int> rsp;

void cria(){
    //cout<<"entra\n";
    int at=1, i=0;
    while(at<=200000){
        mult.push_back(at);
        at=at*3;
        //cout<<at<<"\n";
    }
}


signed main() {

    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int m;
    cin>>m;

    cria();    
    //cout<<"sai\n";

    int i=11;
    while(m!=0){
        //cout<<i<<" "<<m<<" "<<mult[i]<<"\n";
        if(m>=mult[i]){
            m=m-mult[i];
            rsp.push_back(i);
        }
        else{
            i--;
        }
    }

    cout<<rsp.size()<<"\n";
    for(int k=0;k<rsp.size();k++){
        cout<<rsp[k]<<" ";
    }
    cout<<"\n"; 
 
    return 0;

}
