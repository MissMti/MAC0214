#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15

vector<int> a,b,c,bloq(100000);

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m,q;

    cin>>n>>m>>q;
    //cout<<n<<m<<q<<"\n";

    for(int i=0;i<m;i++){
        int ta,tb,tc;
        cin>>ta>>tb>>tc;
        //cout<<i<<"\n";
        a.push_back(ta-1);
        b.push_back(tb-1);
        c.push_back(tc);
    }

    vector<array<int,3>> query(q);
    for (int i = 0; i < q; i++){
        //cout<<i<<"\n";
        cin >> query[i][0];
        if (query[i][0] == 1){
            cin >> query[i][1];
            query[i][1]--;
            bloq[query[i][1]] = 1;
        } 
        else {
            cin >> query[i][1] >> query[i][2];
            query[i][1]--; query[i][2]--;
        }
    }


    vector<long long> rsp;
    vector<vector<long long>> dist(n, vector<long long>(n, Max));
    for (int i = 0; i < n; i++){
        dist[i][i] = 0;
    }

    for (int i = 0; i < m; i++){
        if (bloq[i]) continue;
        dist[a[i]][b[i]] = c[i];
        dist[b[i]][a[i]] = c[i];
    }

    for (int k = 0; k < n; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }

    for (int i = q-1; i >= 0; i--){
        if (query[i][0] == 1){
            int x = query[i][1];
            bloq[x] = 0;
            int A = a[x], B = b[x], C = c[x];
            for (int j = 0; j < n; j++){
                for (int k = 0; k < n; k++){
                    dist[j][k] = min(dist[j][k],dist[j][A]+C+dist[B][k]);
                    dist[j][k] = min(dist[j][k],dist[j][B]+C+dist[A][k]);
                }
            }
        } 
        else {
            int x = query[i][1],y = query[i][2];
            if (dist[x][y] == Max){
                rsp.push_back(-1);
            } 
            else {
                rsp.push_back(dist[x][y]);
            }
        }
    }

    for (int i = rsp.size()-1; i >= 0; i--){
        cout << rsp[i] << endl;
    }

    return 0;
}
