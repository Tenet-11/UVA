// CPE 二星題
// CPE 考古題: 2020/5
// f448. 1316 - Supermarket

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	while (cin >> n) {
		vector <pair<int, int>> v;

		for (int i = 0; i < n; i++) {
			int p, d;
			cin >> p >> d;
			v.push_back({ d,p });
		}

		// 依deadline遞增排
		sort(v.begin(), v.end());

		// 最小值優先 (最小值放最前面) 小根堆
		priority_queue<int, vector<int>, greater<int>> pq;

		for (auto item : v) {
			int deadline = item.first;
			int profit = item.second;

			if (pq.size() < deadline) {
				pq.push(profit);
			}
			else if (!pq.empty() && profit > pq.top()) {
				pq.pop();
				pq.push(profit);
			}
		}

		long long ans = 0;
		while (!pq.empty()) {
			ans += pq.top();
			pq.pop();
		}
		cout << ans << '\n';
	}
}
