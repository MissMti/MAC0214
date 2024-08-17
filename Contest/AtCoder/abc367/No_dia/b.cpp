#include <bits/stdc++.h>
using namespace std;

#define int long long

long long MAX=1000000007;

signed main() {
    double x;
    cin>>x;

    x=x*1000;

    int a=x,b=0;

    if(a%10==0){
        a=a/10;
        b++;
    }
    if(a%10==0){
        a=a/10;
        b++;
    }
    if(a%10==0){
        a=a/10;
        b++;
    }

    x=a;

    for(int i=b;i<3;i++){
        x=double(x)/double(10);
    }

    cout<<x<<"\n";
}
