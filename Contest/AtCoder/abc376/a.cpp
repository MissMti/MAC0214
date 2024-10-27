
#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,c;
    cin>>n>>c;

    vector<int> t(n);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }

    int tmp=t[0];
    int rsp=1;

    for(int i=1;i<n;i++){
        if(t[i]-tmp>=c){
            rsp++;
            tmp=t[i];
        }
    }

    cout<<rsp<<"\n";
    
    return 0;
}
