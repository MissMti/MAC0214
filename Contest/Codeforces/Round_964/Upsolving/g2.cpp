#include <bits/stdc++.h>
using namespace std;

long long MAX=1000000007;

signed main() {
    //ios::sync_with_stdio(0);
    //cin.tie(NULL);cout.tie(NULL);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        long long min=1,max=999,l=333,r=666,rsp;
        while(min<max-2){
            cout<<"? "<<l<<" "<<r<<"\n"<<flush;
            cin>>rsp;
            if(rsp==l*r){
               // cout<<"a";
                min=r;
                l=(2*min+max)/3;
                r=(2*max+min)/3;
            }
            else{
                if(rsp==l*(r+1)){
                    //cout<<"b";
                    max=r;
                    min=l;
                    l=(2*min+max)/3;
                    r=(2*max+min)/3;
                }
                else{
                    //cout<<"c";
                    max=l;
                    l=(2*min+max)/3;
                    r=(2*max+min)/3;
                }
            }
            //cout<<min<<" "<<max<<" "<<l<<" "<<r<<"\n";
        }
        if(max-min==2){
            min++;
            cout<<"? "<<min<<" "<<max<<"\n"<<flush;
            int j;
            cin>>j;
            if(j==(min+1)*(max+1)){
                max=min;
            }
        }
        cout<<"! "<<max<<"\n";
    }
}
