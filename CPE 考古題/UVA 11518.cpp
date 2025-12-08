// CPE 二星題
// CPE 考古題: 2024/5
// b343. 11518 - Dominos 2

#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[10001];
bool visited[10001];

void dfs(int u) {
	if (visited[u])return;

	visited[u] = true;
	for (int v : adj[u]) {
		if (!visited[v]) {
			dfs(v);
		}
	}
}

int main() {
	int T; cin >> T;
	while (T--) {
		int n, m, l;
		cin >> n >> m >> l;

		//初始化
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
			visited[i] = false;
		}

		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
		}
		
		for (int i = 0; i < l; i++) {
			int start; cin >> start;
			dfs(start);
		}

		int ans = 0;
		for (int i = 1; i <= n; i++) {
			if (visited[i]) {
				ans++;
			}
		}
		cout << ans << '\n';
	}
}
