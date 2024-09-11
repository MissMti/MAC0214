#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> a;
vector<int> rsp;

int m[105][10005];

bool mochila(int atual, int n, int soma){
    //cout<<atual<<" "<<soma<<"\n";
    if(soma<0){
        //cout<<"soma menor\n";
        return false;
    }
    else{
        //cout<<"soma maior\n";
        if(atual==n){
            //cout<<"soma igual atual\n";
            return soma==0;
        }
        int &rsp=m[atual][soma];
        if(rsp!=-1){
            return rsp;
        }
        return rsp=(mochila(atual+1,n,soma)|mochila(atual+1,n,soma-a[atual]));
    }
}

signed main() {

    int n;
    cin>>n;

    int soma=0;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back(tmp);
        soma+=a[i];
    }
	
    //cout<<soma<<"\n";

    if(soma%2==1){
        //cout<<"soma impar\n";
        cout<<"-1\n";
        return 0;
    }

    soma=soma/2;
    memset(m, -1, sizeof m);

    if(!mochila(0,n,soma)){
        //cout<<"n mochila\n";
        cout<<"-1\n";
        return 0;
    }
    else{//impressao com a ideia do enunciado
        //cout<<"impressao\n";

        vector<int> va, vb;
        int soma_tmp=soma;
        for (int i = 0; i < n; i++) {
            if (mochila(i+1, n,soma_tmp)){
                vb.push_back(a[i]);
            } 
            else {
                va.push_back(a[i]);
                soma_tmp -= a[i];
            }
        }

       // cout<<"impressoes\n";

        int a=0,b=0;
        //cout<<a<<" "<<b<<" "<<soma<<" "<<va.size()<<" "<<vb.size()<<"\n";
        a+=va.back();
        cout<<va.back();
        va.pop_back();
        while(a+b<soma*2){
            //cout<<a<<" "<<b<<" "<<soma<<" "<<va.size()<<" "<<vb.size()<<"\n";
            if(a<=b){//alice
                a+=va.back();
                cout<<" "<<va.back();
                va.pop_back();
            }
            else{//bob
                b+=vb.back();
                cout<<" "<<vb.back();
                vb.pop_back();
            }
        }
        cout<<"\n";
    }

    return 0;

}
