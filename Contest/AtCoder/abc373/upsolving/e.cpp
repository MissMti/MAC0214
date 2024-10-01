
#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<pair<int,int>> b;



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;

    int soma=0;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        b.push_back(make_pair(tmp,i));
        soma+=tmp;
    }

    //cout<<soma<<"\n";

    //int sobra=k-soma;

    sort(b.begin(),b.end());//taz do menor pro maior

    vector<pair<int,int>> a(n);

    for(int i=0;i<n;i++){
        a[i]=b[n-1-i];
    }

    vector<int> rsp(n,0);
    vector<int> custo;

    if (m+1<=n){

        int cnt=0;
        for (int i=m-2;i>=0;i--){
            cnt+=(m-i)*(a[i].first-a[i+1].first);
            custo.push_back(cnt);
        }


        for (int i=0;i<n;i++){
            int adc=0;
            if(i>=m){
                adc=a[m-1].first-a[i].first;
            }

            if (adc>k-soma) {
                rsp[a[i].second]=-1;
                continue;
            }

            int adcc=a[m-1].first-a[m].first;
            if(i>=m){
                adcc=0;
            }

            auto it = upper_bound(custo.begin(), custo.end(), k-soma-adc-adcc);
            int x = distance(custo.begin(), it)+2;
            int y = k-soma-adc-adcc;

            int z = a[m-x+1].first;
            if (x>2)
            {
                y-=custo[x-3];
            }
            z+=(y+1)/x;
            
            rsp[a[i].second]=max(0ll, z-a[i].first);
        }


    

    }

    for(int i=0;i<n;i++){
        cout<<rsp[i]<<" ";
    }
    cout<<"\n";

    
 
    return 0;

}

