#include <bits/stdc++.h>
using namespace std;

#define int long long

bool divide(const string &a, const string &b) {
	int div=0;
	for (int i = 0; i < (int)b.size(); ++i) {
		div=div*2+(b[i] == '1');
	}

	int M = 0;
	for (int i = 0; i < (int)a.size(); ++i) {
		M = (M*2+(a[i]== '1'))% div;
	}

	return M == 0;
}

signed main() {

	string a, b;
	cin >> a >> b;

	int cnt = 0;
	cnt += count(a.begin(), a.end(), '*');
	cnt += count(b.begin(), b.end(), '*');

	vector<pair<int, int>> ind;
	for (int i = 0; i < (int)a.size(); ++i) {
		if (a[i] == '*') {
			ind.push_back({ 0, i });
		}
	}

	for (int i = 0; i < (int)b.size(); ++i) {
		if (b[i] == '*') {
			ind.push_back({ 1, i });
		}
	}

	for (int mask = 0; mask < (1 << cnt); ++mask) {  
		string pri = a;
		string seg = b;

		for (int i = 0; i < cnt; ++i) {
			if (mask & (1 << i)) {
				if (ind[i].first == 0) {
					pri[ind[i].second] = '1';
				} else {
					seg[ind[i].second] = '1';
				}
			} else {
				if (ind[i].first == 0) {
					pri[ind[i].second] = '0';
				} else {
					seg[ind[i].second] = '0';
				}
			}
		}

		if  (divide(pri, seg)) {
			cout << pri << '\n';
			return 0;
		}
	}
}
