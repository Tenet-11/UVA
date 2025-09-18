// CPE 二星題
// CPE 考古題: 2021/12
// e633. 10800 - Not That Kind of Graph

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	int count = 0;
	while (t--) {
		string s;
		cin >> s;
		int n = (int)s.size();

		vector<int> row(n);
		vector<char> ch(n);

		int h = 0;
		int minRow = INT_MAX, maxRow = INT_MIN;

		for (int i = 0; i < n; i++) {
			if (s[i] == 'R') {  // R
				row[i] = h;
				ch[i] = '/';
				h += 1;
			}
			else if (s[i] == 'F') { // F
				h -= 1;
				row[i] = h;
				ch[i] = '\\';
			}
			else { // C
				row[i] = h;
				ch[i] = '_';
			}
			minRow = min(minRow, row[i]);
			maxRow = max(maxRow, row[i]);
			
		}
		
		int H = maxRow - minRow + 1;
		vector<string> grid(H, string(n, ' '));

		// 把圖塞進grid裡
		for (int i = 0; i < n; i++) {
			int r = maxRow - row[i];
			grid[r][i] = ch[i];
		}

		cout << "Case #" << ++count << ":\n";
		for (int r = 0; r < H; r++) {
			int last = n - 1;
			while (last >= 0 && grid[r][last] == ' ') {
				last--;
			}
			cout << "| ";
			if (last >= 0) {
				cout << grid[r].substr(0, last + 1);
			}
			cout << '\n';
		}
		cout << '+';
		for (int i = 0; i < n + 2; i++) {
			cout << '-';
		}
		cout << "\n\n";
	}
}
