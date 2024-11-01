#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15
#define MOD 1000000007

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int l,r,a,tl=1,tr=1;
    char s;
    int rsp = 0;
    for(int i=0;i<n;i++){
        cin>>a>>s;
        if (s == 'L'){
            if (tl){
                l = a;
                tl = 0;
            }
            else{
                rsp += abs(l - a);
                l = a;
            }
        }
        else {
            if (tr){
                r = a;
                tr=0;
            }
            else{
                rsp += abs(r - a);
                r = a;
            }
        }
    }
    cout << rsp << endl;

    return 0;
}
