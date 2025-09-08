// CPE 二星題
// CPE 考古題: 2020/12
// n733. 11536 - Smallest Sub-Array

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
	int t; cin >> t;
	int count = 0;
	while (t--) {
		int N, mod, k;
		cin >> N >> mod >> k;


		vector<int>num(N + 1);
		num[1] = 1, num[2] = 2, num[3] = 3;
		for (int i = 4; i <= N; i++) {
			num[i] = (num[i - 1] + num[i - 2] + num[i - 3]) % mod + 1;
		}
		vector<int>last(k + 1, 0);
		int covered = 0;
		queue<int>q;
		int ans = INT_MAX;

		for (int i = 1; i <= N; i++) {
			int x = num[i];
			if (1 <= x && x <= k) {
				if (last[x] == 0)covered++;
				last[x] = i;  // 更新1~k每位最後出現位置
			}
			q.push(i);

			// 檢查左端的數字能不能丟
			while (!q.empty()) {
				int last_idx = q.front();
				int v = num[last_idx];

				if (v < 1 || v > k || last_idx < last[v])q.pop();
				else break;
			}

			if (covered == k && !q.empty()) {
				ans = min(ans, i - q.front() + 1);
			}
		}

		if (ans == INT_MAX) {
			cout << "Case " << ++count << ": sequence nai\n";
		}
		else {
			cout << "Case " << ++count << ": " << ans << '\n';
		}
	}
}
