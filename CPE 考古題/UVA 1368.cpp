// CPE 一星題
// CPE 考古題: 2020/6
// f437. 1368 - DNA Consensus String
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int m, n; cin >> m >> n;

		vector<string> vec;
		for (int i = 0; i < m; i++) {
			string s; cin >> s;
			vec.push_back(s);
		}

		string consensus;
		long long total = 0;

		for (int col = 0; col < n; col++) {
			int cnt[4] = { 0,0,0,0 }; // 分別代表ACGT

			// 統計某欄字母分別出現次數
			for (int row = 0; row < m; row++) {
				char ch = vec[row][col];

				int id;
				if (ch == 'A')id = 0;
				else if (ch == 'C')id = 1;
				else if (ch == 'G')id = 2;
				else id = 3;
				cnt[id]++;
			}

			//找出某欄出現最多次的字母
			int bestId = 0, bestCnt = cnt[0];
			for (int k = 1; k < 4; k++) {
				if (cnt[k] > bestCnt) {
					bestCnt = cnt[k];
					bestId = k;
				}
			}
			
			if (bestId == 0)consensus += 'A';
			else if (bestId == 1)consensus += 'C';
			else if (bestId == 2)consensus += 'G';
			else consensus += 'T';

			total += (m - bestCnt);
		}

		cout << consensus << '\n' << total << '\n';
	}
}
