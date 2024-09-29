//Consegui fazer 4 ex ;-;

#include <bits/stdc++.h>

using namespace std;

#define int long long


vector<int> a(200005);

vector<pair<int,int>> e[200005];


bool vis[200005];

void DFSRec(int s){
    vis[s] = true;
    //cout<<s<<"\n";

    queue<int> f;
    f.push(s);
    while(!f.empty()){
        int u=f.front();
        f.pop();
        //cout<<u<<"u\n";
        for (int i=0;i<e[u].size();i++){
            int v=e[u][i].first,w=e[u][i].second;
            //cout<<v<<" "<<w<<"\n";
            if (vis[v] == false){
                vis[v]=true;
                a[v]=a[u]+w;
                //cout<<a[v]<<"pseo\n";
                f.push(v);
            }
        }
    }
    
        
            
}


void dfs(int n,int m,int at){
    for (int i = 1; i <= n; i++){
        if (vis[i] == false){
            DFSRec(i);
        }
    }
}

signed main() {

    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;

    int u,v,w;
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        e[u].push_back(make_pair(v,w));
        e[v].push_back(make_pair(u,-w));
    }  

    a[1]=0;
    dfs(n,m,0);

    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }   
    cout<<"\n";
    
 
    return 0;

}
