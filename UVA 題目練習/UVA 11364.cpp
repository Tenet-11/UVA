// 難度一顆星
// e511. 11364 - Parking

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 除了算到各個商店的最短路徑，還要算回到車上的距離
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>store;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			store.push_back(x);
		}

		sort(store.begin(), store.end());
		
		int result = 2 * (store[store.size() - 1] - store[0]);
		cout << result << '\n';
	}
}
