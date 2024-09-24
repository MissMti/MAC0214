#include <bits/stdc++.h>

using namespace std;

#define int long long


signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    
    long long l = 1, r = n * n, mid, count;

    while (l < r) {

        mid = (l + r) / 2;
        count = 0;

        for (long long i = 1; i <= n; i++)
            count += min(n, mid / i);

        if (count >= (n * n + 1) / 2)
            r = mid;
        else
            l = mid + 1;
    }

    cout<<r<<"\n";

 
    return 0;

}
