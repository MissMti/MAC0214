#include <bits/stdc++.h>

#define oiee ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

using namespace std;

signed main(){
    oiee;

    int N; cin >> N;

    int a,soma=0;

    for(int i=0;i<N;i++){
        cin>>a;
        if(a==2 || a==3){
            soma++;
        }
    }
    
    cout<<soma<<"\n";


}
