#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

vector<int> a,p,b,q;
int n,x;

#define MAX 1e10


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    
    for(int i=0;i<n;i++){
        int ta,tb,tc,td;
        cin >> ta>>tb>>tc>>td;
        a.push_back(ta);
        p.push_back(tb);
        b.push_back(tc);
        q.push_back(td);
    }

    int l=1,r=MAX;
    while(l<=r){//busca binaria
        int meio=(l+r)/2, tot=x;
        for(int i=0;i<n;i++){
            int sub=MAX;//?
            for(int j=0;j<=b[i];j++){
                int atu=j*p[i];
                int tmp=max(0ll,meio-a[i]*j);
                atu+=((tmp+b[i]-1)/b[i])*q[i];
                sub=min(sub,atu);
            }
            for(int j=0;j<=a[i];j++){
                int atu=j*q[i];
                int tmp=max(0ll,meio-b[i]*j);
                atu+=((tmp+a[i]-1)/a[i])*p[i];
                sub=min(sub,atu);
            }
            tot-=sub;
            if(tot<0){
                break;
            }
        }
        
        if(tot>=0){
            l=meio+1;
        }
        else{
            r=meio-1;
        }
    }

    cout << r << "\n";
    return 0;
}
