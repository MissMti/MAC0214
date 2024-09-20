#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<pair<int,int>> A;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,x;
    cin>>n>>x;

    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        A.push_back(make_pair(tmp,i));
    }

    sort(A.begin(),A.end());

    int l=0,r=n-1;
    
    while(l<r){
        if(A[l].first + A[r].first>x){
            r--;
        }
        else{
            if(A[l].first + A[r].first<x){
                l++;
            }
            else{
                cout<<A[l].second+1<<" "<<A[r].second+1<<"\n";
                return 0;
            }
        }
    }

    cout<<"IMPOSSIBLE\n";

    return 0;

}
