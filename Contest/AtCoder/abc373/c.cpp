#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10

vector<int> a;


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    string s;
    cin>>n;

    int a,b,ma=-MAX;
    int mb=-MAX;

    cin>>ma;
    for(int i=1;i<n;i++){
        cin>>a;
        if(a>ma){
            ma=a;
        }
    }

    cin>>mb;
    for(int i=1;i<n;i++){
        cin>>b;
        if(b>mb){
            mb=b;
        }
    }

    cout<<ma+mb<<"\n";
 
    return 0;

}
