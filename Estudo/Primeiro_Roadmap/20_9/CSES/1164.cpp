#include <bits/stdc++.h>

using namespace std;

#define int long long


int rsp[200005];

vector<pair<pair<int, int>, int>> v;

signed main() {

        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(make_pair(a,b),i));
    }
 
    sort(v.begin(), v.end());
 
    int ult=0;
 
    priority_queue<pair<int, int>> pq; 
 
    for(int i=0;i<n;i++){
        if(pq.empty()||-pq.top().first>=v[i].first.first){
            ult++;
            pq.push(make_pair(-v[i].first.second, ult));
			rsp[v[i].second] = ult;
        }
        else{
            pair<int, int> min = pq.top();
			pq.pop();
			pq.push(make_pair(-v[i].first.second, min.second));
			rsp[v[i].second] = min.second;
 
        }
    }
 
 
	cout << ult << "\n";
 
	for (int i = 0; i < n; i++) { 
        cout << rsp[i] << " "; 
    }
 
 
    return 0;

}

