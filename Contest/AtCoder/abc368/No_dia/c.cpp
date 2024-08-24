#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main (){
    int n,k;
    vector<int> a;
    cin>>n;
    int aux;
    for(int i=0;i<n;i++){
        cin>>aux;
        a.push_back(aux);
    }

    int t=0;//0,1,2 Preciso arrumar o seguinte
    for(int i=0;i<n;i++){
        t+=(a[i]/5)*3;
        a[i]-=(a[i]/5)*5;
        while(a[i]>0){
            t++;
            if(t%3==0){
                a[i]-=3;
            }
            else{
                a[i]--;
            }
        }



        
    }

    cout<<t<<"\n";

}
