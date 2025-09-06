// CPE 二星題
// CPE 考古題: 2020/6
// d813. 10583 - Ubiquitous Religions

#include <iostream>
using namespace std;

const int max_n = 50005;
int pa[max_n];

int Find(int x) {
	if (pa[x] == x) {
		return x;
	}
	else {
		pa[x] = Find(pa[x]);
		return pa[x];
	}
}

bool Union(int x, int y, int n) {
	int g1 = Find(x);
	int g2 = Find(y);

	if (g1 == g2)return false;
	else {
		pa[g2] = g1;
		return true;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	int count = 0;
	while (cin >> n >> m) {
		
		if (n == 0 && m == 0)break;
		for (int i = 1; i <= n; i++) {
			pa[i] = i;
		}

		int ans = n;
		while (m--) {
			int x, y;
			cin >> x >> y;
			if (Union(x, y, n)) {
				ans--;
			}
		}
		cout << "Case " << ++count << ": " << ans << '\n';
	}
}
