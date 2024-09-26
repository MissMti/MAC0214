#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> a;


signed main() {

    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;

    
    for(int k=1;k<=n;k++){
        a.push_back(k);
        //cout<<k;
        int tmp=a.size()-1;
        for(int i=0;i<tmp;i++){
            a.push_back(a[i]);
            //cout<<a[i];
        }
    }

    for(int k=0;k<a.size();k++){
        cout<<a[k]<<" ";
    }
    cout<<"\n";
 
    return 0;

}
