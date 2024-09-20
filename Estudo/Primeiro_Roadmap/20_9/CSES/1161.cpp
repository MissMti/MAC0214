#include <bits/stdc++.h>

using namespace std;

#define int long long

//Demorei um pouco nesse exercicio antes de pesquisar o editorial e a logica era bem simples do que eu imaginei

priority_queue<int, vector<int>, greater<int>> a;

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int x,n;
    cin>>x>>n;

    for(int i=1;i<=n;i++){
        int tmp;
        cin>>tmp;
        a.push(tmp);
    }

    int soma=0;
    while(a.size()>1){
        int c = a.top(); a.pop();
        int d = a.top(); a.pop();
        a.push(c+d);
        soma += c+d;
    }

    cout<<soma<<"\n";

    return 0;

}
