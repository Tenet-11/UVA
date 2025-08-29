// CPE 三星題
// CPE 考古題: 2019/12
// c128. 00544 - Heavy Cargo
#include <iostream>
#include <climits>
#include <map>
using namespace std;

map<string, int> mp;
int idx;
int a[205][205];

int getid(const string& s) {
	auto it = mp.find(s);
	if (it != mp.end()) {
		return it->second;
	}
	return mp[s] = idx++;
}


// 最大瓶頸路徑（maximin path）
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, r;
	int scenario = 0;
	while (cin >> n >> r) {
		if (n == 0 && r == 0)break;
		mp.clear();
		idx = 0;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = 0;
			}
			a[i][i] = INT_MAX;
		}

		// 讀r條道路
		for (int i = 0; i < r; i++) {
			string s1, s2;
			int w;
			cin >> s1 >> s2 >> w;
			int u = getid(s1), v = getid(s2);
			a[u][v] = max(a[u][v], w);
			a[v][u] = max(a[v][u], w);
		}

		// 讀查詢 (起點，終點)
		string S, T;
		cin >> S >> T;
		int s = getid(S), t = getid(T);

		// Floyd–Warshall（maximin 版）
		for (int k = 0; k < n; k++) {
			for (int i = 0; i < n; i++) {
				if (a[i][k] == 0)continue;
				for (int j = 0; j < n; j++) {
					if (a[k][j] == 0)continue;
					int via = min(a[i][k], a[k][j]);
					if (via > a[i][j])a[i][j] = via;
				}
			}
		}

		cout << "Scenario #" << ++scenario << "\n";
		cout << a[s][t] << " tons\n\n";  // 案例間空一行（照 sample）
	}
}

// 這演算法我還是不太懂，有空要複習
