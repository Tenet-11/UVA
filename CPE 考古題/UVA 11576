// CPE 一星題
// CPE 考古題: 2023/10
// n683. 11576 - Scrolling Sign

#include <iostream>
#include <vector>
using namespace std;

// 找最大前綴、後綴
int main() {
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		int w; cin >> w;
		
		vector<string> words(w);
		for (int i = 0; i < w; i++) {
			cin >> words[i];
		}
		int ans = k;

		for (int i = 1; i < w; i++) {
			string& prev = words[i - 1];
			string& cur = words[i];

			int overlap = 0;
			for (int len = k; len > 0; len--) {
				if (prev.substr(k - len, len) == cur.substr(0, len)) {
					overlap = len;
					break;
				}
			}
			ans += (k - overlap);
		}
		cout << ans << '\n';
	}
}
