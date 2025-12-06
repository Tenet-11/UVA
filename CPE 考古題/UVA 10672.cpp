// CPE 三星題
// CPE 考古題: 2023/10月
// n694. 10672 - Marbles on a tree

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 100005;
int n;
vector<vector<int>>children;
int marbles[MAXN];  // 每個節點幾個彈珠
long long moves; 

int dfs(int u) {
	int surplus = marbles[u] - 1;

	for (int v : children[u]) {
		int child_net = dfs(v);
		moves += abs(child_net);
		surplus += child_net;
	}
	return surplus;
}

int main() {
	while (cin >> n) {
		if (n == 0)break;

		children.assign(n + 1, vector<int>());
		// 清空
		for (int i = 1; i <= n; i++) {
			children[i].clear();
		}

		// 對一段記憶體區塊全部設為某個固定值的函式
		memset(marbles, 0, sizeof(marbles));
		moves = 0;

		int root = 1;
		vector<bool>hasParent(n + 1, false);
		for (int i = 0; i < n; i++) {
			int v, m, d;
			cin >> v >> m >> d;
			marbles[v] = m;
			while (d--) {
				int c; cin >> c;
				children[v].push_back(c);
				hasParent[c] = true;
			}
		}
		for (int i = 1; i <= n; i++) {
			if (!hasParent[i]) {
				root = i;
				break;
			}
		}
		dfs(root);
		cout << moves << '\n';
	}
}
