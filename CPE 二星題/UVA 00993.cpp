// CPE 二星題
// d418. 00993 - Product of digits

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int N; cin >> N;
		// 記得兩個特殊測資
		if (N == 0) {
			cout << 10 << endl;
			continue;
		}
		if (N == 1) {
			cout << 1 << endl;
			continue;
		}
		vector<int> fac;
		bool check = true;
		while (N > 1) {
			int i = 9;
			while (i >= 2) {
				if (N % i == 0) {
					N /= i;
					fac.push_back(i);
				}
				else {
					i--;
					continue;
				}
			}
			if (N != 1) {
				check = false;
				break;
			}
		}
		if (!check) {
			cout << -1 << endl;
			continue;
		}
		sort(fac.begin(), fac.end());
		for (int i = 0; i < fac.size(); i++) {
			cout << fac[i];
		}
		cout << endl;
	}
}
