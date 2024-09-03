#include <bits/stdc++.h>

#define oiee ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

using namespace std;

signed main(){
    oiee;

    int N, M; cin >> N >> M;

    vector<int> bulbs(M, 0);

    int L;
    cin >> L;
    // conta acessas
    int cont=L, ans=-1;

    while(L--){
        int aux;
        cin >> aux;

        bulbs[aux-1]=1;
    }

    vector<vector<int>> switches(N);

    for(int i=0; i<N; i++){
        int aux1, aux2;

        cin >> aux1;

        while(aux1--){
            cin >> aux2;

            //bulbs[aux2-1]=(bulbs[aux2-1]+1)%2;
//
            //if(!bulbs[aux2-1])
            //    cont--;
            //else
            //    cont++;
//
            //if(cont==0)
            //    ans=i+1;

            switches[i].push_back(aux2-1);
        }

    }

    for(int i=0; i<2*N; i++){
        int ii=i%N;
        for(int j=0; j<(int)switches[ii].size(); j++){
            bulbs[switches[ii][j]]=(bulbs[switches[ii][j]]+1)%2;


            if(!bulbs[switches[ii][j]])
                cont--;
            else
                cont++;
        }

        if(cont==0){
            ans=i+1;
            break;
        }
    }

    cout << ans << "\n";

}
