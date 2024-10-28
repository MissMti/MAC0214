#include <bits/stdc++.h>

using namespace std;

#define int long long
#define Max 1e15



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int n, k;
        int soma = 0;
        cin >> n >> k;
        vector<pair<int, int>> ab(n);
        priority_queue<int> pq;

        for(int i=0;i<n;i++){
            cin >> ab[i].first;
        } 
        for(int i=0;i<n;i++){
            cin >> ab[i].second;
        }

        sort(ab.begin(), ab.end());

        for(int i=0;i<k;i++) {
            soma += ab[i].second;
            pq.push(ab[i].second);
        }

        int rsp=soma*ab[k-1].first;

        for (int i = k; i < n; i++) {
            soma -= pq.top();
            pq.pop();
            soma += ab[i].second;
            pq.push(ab[i].second);
            rsp = min(rsp,soma*ab[i].first);
        }

        cout<<rsp<<"\n";
    }

    return 0;
}
