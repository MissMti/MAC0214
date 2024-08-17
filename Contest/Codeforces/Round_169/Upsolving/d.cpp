#include <bits/stdc++.h>
using namespace std;

#define int long long

long long MAX=1000000007;

const string vars[]={"BR", "BG", "BY", "GR", "RY", "GY"};

/*
BR 1 (6)
BG 2 (5)
BY 3 (4)
GR 4 (3)
RY 5 (2)
GY 6 (1)
*/


void solve(){
    int n,q;
    cin>>n>>q;
    int cores [10][n];
    vector<int> tam(10,0);
    vector<int> A(n+5);
    for(int i=1;i<=n;i++){
        char aux[5];
        cin>>aux;
        A[i]=find(vars,vars+6,aux)-vars+1;
        cores[find(vars,vars+6,aux)-vars+1][tam[find(vars,vars+6,aux)-vars+1]]=i;
        tam[find(vars,vars+6,aux)-vars+1]++;

    }

    
    int l[n+5][10], r[n+5][10];
    for (int i = 1; i <= n; i++) {
        l[i][1]=-MAX;
        l[i][2]=-MAX;
        l[i][3]=-MAX;
        l[i][4]=-MAX;
        l[i][5]=-MAX;
        l[i][6]=-MAX;

        r[i][1]=-MAX;
        r[i][2]=-MAX;
        r[i][3]=-MAX;
        r[i][4]=-MAX;
        r[i][5]=-MAX;
        r[i][6]=-MAX;
        for(int j=1;j<=6;j++){  
            
            if(A[i]!=j){
                int a=0,b=tam[j],meio=(a+b)/2,cont=0;
                //cout<<"ini: "<<i<<" "<<j<<" "<<a<<" "<<b<<"\n";
                while(b>a+1){
                    meio=(a+b)/2;
                    if(cores[j][meio]>i){
                        b=meio;
                    }
                    else{
                        a=meio;
                    }
                    cont++;
                }
                if(a!=0 || b!=0 || cont!=0){
                    l[i][j]=cores[j][a];
                    //cout<<i<<" "<<j<<" "<<a<<" "<<cores[j][a]<<"\n";
                    if(a!=tam[j]-1){
                        a++;
                    }
                    r[i][j]=cores[j][a];
                    //cout<<a<<"\n";
                }
            }
        }
    }

    int x,y,rsp;
    for(int i=0;i<q;i++){
        cin>>x>>y;

        int rsp=MAX;
        if(A[x]+A[y]!=7){
            rsp=abs(x-y);
        }
        else{
            for (int j = 1; j <= 6; j++) {
                if (A[x] != j && A[y] != j) {
                    rsp = min(min(rsp, abs(x - l[x][j]) + abs(l[x][j] - y)), abs(x - r[x][j]) + abs(r[x][j] - y));
                }
            }
        }
        
        if (rsp==MAX){
            rsp=-1;
        }
        cout<<rsp<<"\n";
    }
    
    
}

signed main() {
    //ios::sync_with_stdio(0);
    //cin.tie(NULL);cout.tie(NULL);

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        solve();
    }

}
