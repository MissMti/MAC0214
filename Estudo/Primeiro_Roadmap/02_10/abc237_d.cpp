
#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10

vector<pair<int,int>> a;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string s;
    cin>>n>>s;
    deque<int> a;
    a.push_back(n);
    for(int i=n-1;i>=0;i--){
        if(s[i]=='L'){
            a.push_back(i);
        }
        else{
            a.push_front(i);
        }
    }

    cout<<a[0];
    for(int i=1;i<=n;i++){
        cout<<" "<<a[i];
    }
    cout<<"\n";
 
    return 0;

}

