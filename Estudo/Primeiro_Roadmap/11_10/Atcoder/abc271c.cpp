#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10

vector<int> b(300005);


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;

    int x;
    set<int> s;

    for(int i=1;i<=n;i++){
        cin>>x;
        s.insert(x);
    }

    //soma=soma/2;

    int j=0,c=0;
    int i=0;

    for(i=1;i<=n;i++){
        if(s.count(i)){
            j++;
        }
        else{
            j=j+2;
        }

        if(j>n){
            break;
        }
        c=i;        
    }

    cout<<c<<"\n";


    return 0;
}

