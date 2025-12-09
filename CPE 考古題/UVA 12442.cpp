// CPE 三星題
// CPE 考古題: 2025/3
// a523. 12442 - Forwarding Emails

#include <iostream>
#include <vector>

using namespace std;

vector<int>nxt;
vector<bool>visited;
vector<bool>done;
int cnt;

void dfs(int u) {
	cnt++;
	visited[u] = true;
	done[u] = true;

	int v = nxt[u];
	if (!visited[v])dfs(v);
}

int main() {
	int T; cin >> T;
	int count = 0;
	while (T--) {
		int N; cin >> N;
		
		nxt.assign(N + 1, 0);
		visited.assign(N + 1, false);
		done.assign(N + 1, false);

		for (int i = 0; i < N; i++) {
			int a, b;
			cin >> a >> b;
			nxt[a] = b;
		}

		int bestID = 1;
		int bestReach = 0;

		for (int i = 1; i <= N; i++) {
			if (!done[i]) {
				visited.assign(N + 1, false);
				visited[i] = true;

				cnt = 1;
				dfs(nxt[i]);

				if (cnt > bestReach) {
					bestReach = cnt;
					bestID = i;
				}
			}
		}
		cout << "Case " << ++count << ": " << bestID << "\n";
	}
}
