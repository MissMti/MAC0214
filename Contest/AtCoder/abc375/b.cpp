#include <bits/stdc++.h>

using namespace std;

//#define int long long
#define int double

#define MAX 1e10

int dis(int xa,int ya,int xb,int yb){
    //cout<<(xa-xb)<<" "<<(xa-xb)*(xa-xb)<<" "<<((xa-xb)*(xa-xb))<<"\n";

    return sqrt(((xa-xb)*(xa-xb))+((ya-yb)*(ya-yb)));
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;
    int x=0,y=0,soma=0;
    for(int i=0;i<n;i++){
        int tx,ty;
        cin>>tx>>ty;
        soma+=dis(x,y,tx,ty);
        //cout<<dis(x,y,tx,ty)<<"\n";
        x=tx;
        y=ty;
    }

    soma+=dis(x,y,0,0);

    cout<<setprecision(20)<<soma<<"\n";

    return 0;
}
