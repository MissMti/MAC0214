#include <bits/stdc++.h>

using namespace std;

#define int long long



int m[15][15];
int md[15][15];
int p[15][15];



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;

    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int u,v;
        cin>>u>>v;
        m[u][v]=1;
        m[v][u]=1;
        if(u<v){
            m[u][v]=1;
        }
        else{
            m[v][u]=1;
        }
    }

    cin>>a;
    for(int i=0;i<a;i++){
        int u,v;
        cin>>u>>v;
        md[u][v]=1;
        md[v][u]=1;
        if(u<v){
            md[u][v]=1;
        }
        else{
            md[v][u]=1;
        }
    }


    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<md[i][j]<<" ";
        }
        cout<<"\n";
    }*/


    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            cin>>p[i][j];
            p[j][i]=p[i][j];
        }
    }






    //cria as permutaçoes
    int perm=1;
    for(int i=1;i<=n;i++){
        perm*=i;
    }
    

    int per[]={0,1,2,3,4,5,6,7,8,9,10};
    sort(per+1,per+n+1);

    int rsp=10e9;





    int somat=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(m[i][j] ^ md[i][j]){
                somat+=p[i][j];
            }
        }
    }
    rsp=min(rsp,somat);


    
    for(int k=1;k<perm;k++){//testar todas as permutaoes
        next_permutation(per+1,per+n+1);
        int soma=0;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(m[i][j] ^ md[per[i]][per[j]]){
                    soma+=p[per[i]][per[j]];
                }
            }
        }
        rsp=min(rsp,soma);

        
    }

    cout<<rsp<<"\n";

    return 0;
}
