#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10

int a[105][105];
int b[105];

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>b[j];
        }
        for(int j=0;j<k;j++){
            for(int l=j+1;l<k;l++){
                a[b[j]][b[l]]=1;
            }
        }
    }


    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if (a[i][j] == 0) {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
   

    return 0;
}
