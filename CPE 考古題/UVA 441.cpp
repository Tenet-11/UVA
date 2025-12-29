// CPE 二星題
// CPE 考古題: 2025/5
// c074. 00441 - Lotto

#include <iostream>
#include <vector>
using namespace std;

vector<int>nums;
vector<int>cur;

// 回溯問題
void dfs(int idx, int start) {
	if (idx == 6) {
		for (int i = 0; i < 6; i++) {
			if (i == 0)cout << cur[i];
			else cout << " " << cur[i];
		}
		cout << '\n';
		return;
	}

	for (int i = start; i < nums.size(); i++) {
		cur.push_back(nums[i]);
		dfs(idx + 1, i + 1);
		cur.pop_back();
	}
}


int main() {
	int k;
	bool first = false;
	while (cin >> k) {
		if (k == 0)break;

		nums.clear();
		cur.clear();
		for (int i = 0; i < k; i++) {
			int x; cin >> x;
			nums.push_back(x);
		}

		if (first)cout << '\n';
		first = true;

		dfs(0, 0);
	}
}
