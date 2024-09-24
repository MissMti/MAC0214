#include <bits/stdc++.h>

using namespace std;

#define int long long


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin>>t;



    for(int i=0;i<t;i++){
        int k,x;
        cin>>k>>x;

        long long l = 1, r = 2 * k - 1;
        long long res = 2 * k - 1;
        bool over = false;
        while (l <= r) {
            int mid = (l + r)/2;
            if (mid >= k) {
                over = ((k*(k+1)/2) + (k*(k-1)/2) - ((2 * k - 1 - mid)*(2 * k - 1 - mid+1)/2)>= x);
            }
            else {
                over = ((mid*(mid+1)/2) >= x);
            }

            if (over) {
                res = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        cout << res << endl;

    }

 
    return 0;

}
