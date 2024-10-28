#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15

vector<int> e[200010];
int vis[200010];

int bfs(){
    queue<pair<int, int>>q;
	q.push(make_pair(1,0));
	vis[1] = 1;
	while (!q.empty()) {
		int n = q.front().first;
        int camada = q.front().second;
		q.pop();
		for(auto &x:e[n]){
			if (x == 1) {
                return camada+1;
			}
			else {
				q.push(make_pair(x,camada+1));
				vis[x] = 1;
			}
		}
	}
    return -1;
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int tu,tv;
        cin>>tu>>tv;
        e[tu].push_back(tv);
    }

    cout<<bfs()<<"\n";

    return 0;
}
