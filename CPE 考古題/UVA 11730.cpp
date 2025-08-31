// CPE 二星題
// CPE 考古題: 2020/5
// d663. 11730 - Number Transformation

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAXV = 1000;

// 建立質數表
vector<int>build_primes(int n = MAXV) {

	// 先假設大家都不是合數 (Composite)
	vector<bool> isComposite(n + 1, false);
	isComposite[0] = isComposite[1] = true; //讓0跟1別當質數用

	// 埃拉托斯特尼篩法
	for (int i = 2; i * i <= n; i++) {
		if (!isComposite[i]) {
			for (int j = i * i; j <= n; j += i) {
				isComposite[j] = true;
			}
		}
	}

	vector<int>primes;
	for (int i = 2; i <= n; i++) {
		if (!isComposite[i]) {
			primes.push_back(i);
		}
	}
	return primes;
}

// BFS演算法 (最短步數)
int bfs_min_steps(int S, int T, vector<int> &primes) {
	if (S == T)return 0;
	if (S > T)return -1;

	vector<int>dist(T + 1, -1);
	
	queue<int>q;
	dist[S] = 0;
	q.push(S);

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int p : primes) {
			if (p >= u)break;
			if (u % p)continue;

			int v = u + p;
			if (v > T)continue;

			if (dist[v] == -1) {
				dist[v] = dist[u] + 1;
				if (v == T)return dist[v];
				q.push(v);
			}
		}
	}
	return -1;
}

int main() {
	int S, T;
	int count = 0;
	vector<int>primes = build_primes();

	while (cin >> S >> T) {
		if (S == 0 && T == 0)break;
		int ans = bfs_min_steps(S, T, primes);

		cout << "Case " << ++count << ": " << ans << '\n';
	}
}
