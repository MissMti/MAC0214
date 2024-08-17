#include <bits/stdc++.h>
using namespace std;

#define int long long

long long MAX=1000000007;
int a[10];
int b[10];

void solve(int n, int k, int x, int soma){
    for(int i=1;i<=a[x];i++){
        b[x]=i;
        if(x<n-1){
            //cout<<x<<"\n";
            solve(n,k,x+1,soma+i);
        }
        else{
            //cout<<soma<<" "<<i<<"\n";
            if((soma+i)%k==0){
                for(int j=0;j<n;j++){
                    cout<<b[j]<<" ";
                }
                cout<<"\n";   
            }
        }
        
    }
}

signed main() {
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    solve (n,k,0,0);

}
