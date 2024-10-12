#include <bits/stdc++.h>

using namespace std;

#define int long long
//#define int double

#define MAX 1e10


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> a(n);
        vector<int> b(n);
        for(int j=0;j<n;j++){
            cin>>a[j]>>b[j];
        }

        int l = 0, r = n + 1, m;
    	while(r - l > 1){
    		m = (l + r)/2;

            int c = 0;
            for(int k = 0; k < n; k++){
                if(m - 1 - c <= a[k] && c <= b[k]){
                    c++;
                } 
            }

    		if(c>=m) {
                l = m;
            }
    		else {
                r = m;
            }
    	}
    	cout << l << "\n";
    }


    return 0;
}
