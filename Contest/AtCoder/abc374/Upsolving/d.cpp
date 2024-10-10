#include <bits/stdc++.h>

using namespace std;

#define ll long long
//#define int double


#define MAX 1e10

vector<pair<int,int>> x,y;
vector<int> p;

long double dist(pair<int,int> l,pair<int,int> r){
  long long v=0;
  v=v+(l.first-r.first)*(l.first-r.first);
  v=v+(l.second-r.second)*(l.second-r.second);
  return sqrtl(((long double)v));
}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,s,t;
    cin >> n >> s >> t;

    for(int i=0;i<n;i++){
        int ta,tb,tc,td;
        cin >> ta>>tb>>tc>>td;
        x.push_back(make_pair(ta,tb));
        y.push_back(make_pair(tc,td));
    }
    
    for(int i=0;i<n;i++){
        p.push_back(i);
    }

   double res=MAX;

    do{
        for(int i=0;i<pow(2,n);i++){
            double tmp=0;
            int m=i;
            pair<int,int> atu=make_pair(0,0);
            for(int j=0;j<n;j++){
                int k=p[j];

                int l=m%2;
                if(l){
                    tmp+=( dist(atu,x[k])/((double)s) );
                    tmp+=( dist(x[k],y[k])/((double)t) );
                    atu=y[k];
                }
                else{
                    tmp+=( dist(atu,y[k])/((double)s) );
                    tmp+=( dist(y[k],x[k])/((double)t) );
                    atu=x[k];
                }
                m=m/2;
            }
            res=min(res,tmp);
        }
    }while(next_permutation(p.begin(),p.end()));


    cout << fixed << setprecision(18) << res << "\n";
    return 0;

}
