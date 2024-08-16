#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, k,aux;
    cin >> n >> k;
    vector<int> costs;

    for(int i=0; i<n; i++){
        cin>>aux;
        costs.push_back(aux);
    }

    sort(costs.begin(), costs.end());

    /*for(int i=0; i<n; i++)
        cout<< costs[i]<<" ";

    cout<<"\n";*/

    for(int i=n-2;i>=0 && k!=0 ;i=i-2){
        int dif=costs[i+1]-costs[i];
        if(k>=dif){
            costs[i]=costs[i+1];
            k=k-dif;
        }
        else{
            if(k!=0){
                costs[i]=costs[i]+k;
                k=0;
            }
        }
    }
    int A=0,B=0;

    for(int i=n-2;i>=0;i=i-2){
        B+=costs[i];
    }

    for(int i=n-1;i>=0 ;i=i-2){
        A+=costs[i];
    }

   // cout<<A<<" "<<B<<"\n";

    cout<<A-B<<"\n";

    /*int sA, sB;
    sA = sB = 0;
    int it=n-1;
    sA+= costs[it--];

    while(it>=0){
        int diff = costs[it+1]-costs[it];
        // cout << "diff " << diff << "\n";
        int sum=0;

        if(k>=diff){
            sum = diff;
            k-=diff;
        }
        else{
            sum=k;
            k=0;
        }
        
        // cout <<"falaa " << sum << "\n"; 

        cout << "somando " << costs[it] << " com " << sum << "\n";
        sB+=costs[it--]+sum;
        // cout << "oiee " << sB << "\n";
        it--;

        if(it>=0){
            cout << "somando " << costs[it] << "\n";
            sA+=costs[it--];

        }
    }

    cout << sA << " " << sB << "\n";
    cout << (sA-sB) << "\n";*/
}

signed main(){
    int t;
    cin >> t;

    while(t--)
        solve();


} 
