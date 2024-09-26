#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> a;



bool verifica(const vector<int> &arr, const int k, int max) {

	int tmp = 0;

	int at = 0;

	for (int i=0;i<a.size();i++) {
        int x=a[i];

		if (x > max) {
            return false; 
        }


		if (at + x > max) {

			tmp++;

			at = 0;

		}

		at += x;

	}

	if (at > 0) { 
        tmp++; 
    }


	return tmp <= k;

}

signed main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,k,max=0,soma=0;
    cin>>n>>k;
    
    for(int i=1;i<=n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        soma+=tmp;
        if(tmp>max){
            max=tmp;
        }
    }

    int l=max, r=soma;

    while (l < r) {

		int m = (l + r) / 2;

		if (verifica(a, k, m)) {

			r = m;

		} else {

			l = m + 1;

		}

	}


	cout << l << endl;

 
    return 0;

}
