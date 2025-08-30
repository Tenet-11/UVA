// CPE 一星題
// CPE 考古題: 2020/5
// f446. 1237 - Expert Enough

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int D; cin >> D;
		map <string, pair<int, int>> mp;
		for (int i = 0; i < D; i++) {
			string s;
			int a, b;
			cin >> s >> a >> b;
			mp[s] = { a,b };
		}

		int test; cin >> test;
		while (test--) {
			int over = 0;
			string ans = "";
			int price; cin >> price;

			for (auto it : mp) {
				if (price >= it.second.first && price <= it.second.second) {
					ans = it.first;
					over++;
					if (over > 1)break;
				}
			}
			if (over == 1) {
				cout << ans << '\n';
			}
			else {
				cout << "UNDETERMINED\n";
			}
		}
	}
}
