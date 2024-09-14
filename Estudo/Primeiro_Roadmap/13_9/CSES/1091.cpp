#include <bits/stdc++.h>
using namespace std;

#define int long long


multiset<int> Ni;
//set<int> Mi;



signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        Ni.insert(tmp);
    }


    for (int i = 0; i < m; i++) {
        int tmp;
		cin >> tmp;

		auto it = Ni.upper_bound(tmp);

		if (it == Ni.begin()) {
			cout << "-1\n";
		}
        else {
            it--;
            cout << *(it) << "\n";

			Ni.erase(it);
            
            
		}
	}

    return 0;
}
