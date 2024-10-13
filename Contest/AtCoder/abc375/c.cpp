#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10

char a[3005][3005];
char b[3005][3005];

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }

    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int c=min(min(min(i,j),n+1-i),n+1-j)%4;
            int ti=i,tj=j;
            for (int k = 1; k <= c; k++) {
                int nx = tj, ny = n + 1 - ti;
                ti = nx, tj = ny;
            }
            b[ti][tj] = a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<b[i][j];
        }
        cout<<"\n";
    }

    return 0;
}


