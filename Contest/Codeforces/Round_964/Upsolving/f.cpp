#include <bits/stdc++.h>
using namespace std;

long long MAX=1000000007;
const long long MAXtam=200005;

long long  dp[MAXtam+5] ;


long long aux(long long a, long long b) {
	long long r = 1;
	while(b > 0) {
		if(b & 1) r = (r * a) % MAX;
		b /= 2;
		a = (a * a) % MAX; 
	}
	return r;
}
long long comb(long long n, long long k) {
	if(n < k) return 0;
	return (dp[n] * aux((dp[n - k] * dp[k]) % MAX, MAX - 2)) % MAX;
}
 


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    dp[0] = 1;
	  for(long long i = 1; i<MAXtam+2; i++) dp[i] = (dp[i - 1] * i) % MAX;

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        long long n,k;
        cin>>n>>k;
        long long tudo=0;
        //cout<<tudo<<" ";
        long long bi,zero=0,um=0;
        for(long long j=0;j<n;j++){
            cin>>bi;
            if(bi==0){
                zero++;
            }
            else{
                um++;
            }
        }
        long long maioria=(k/2)+1;
        long long qtdmai,sobrou;

        for(long long j=maioria;j<=k;j++){
            //quantas maiorias dá para ter?
            qtdmai=comb(um,j);

            //quantas combinacoes com oq sobrou
            sobrou=comb(zero,k-j);

            tudo=(tudo%MAX+(((qtdmai%MAX)*(sobrou%MAX))%MAX)%MAX)%MAX;
        }        

        cout<<tudo<<"\n";
    }
}
