#include <bits/stdc++.h>

using namespace std;

#define int long long

#define MAX 1e10

vector<int>k;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,soma=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        k.push_back(tmp);
        soma+=tmp;
    }

    //sort(k.begin(),k.end());

    int rsp=INT_MAX;
    for(int i=0;i<pow(2,n);i++){//todas as possibilidades, s
        int tmp=i,sum=0,j=0;
        while(tmp){
            int d=tmp%2;
            if(d){
                sum+=k[j];
            }
            tmp=tmp/2;
            j++;
        }
        rsp=min(rsp,max(sum,soma-sum));
    }

    cout<<rsp<<"\n";

    return 0;

}
