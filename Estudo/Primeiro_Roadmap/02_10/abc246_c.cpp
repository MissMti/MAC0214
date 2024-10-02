
#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10

vector<int> a;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,k,x;
    cin>>n>>k>>x;

    int soma=0;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
        soma+=t;
    }
    

    int cnt = 0;
    for(int i = 0; i <= n-1; i++){
        cnt += a[i]/x;
    } 
    cnt = min(cnt, k);
    soma =soma-cnt*x;
    k=k-cnt;
    
    for(int i = 0; i <= n-1; i++){
        a[i] %= x;
    }
    sort(a.begin(), a.end());
    
    for(int i = n-1; i >= 0 && k>0; i--,k--){
        soma =soma-a[i];
    }
    
    cout << soma << endl;
 
    return 0;

}

