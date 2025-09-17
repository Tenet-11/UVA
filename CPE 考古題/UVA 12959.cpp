// CPE 一星題
// CPE 考古題: 2021/10
// g471. 12959: Strategy Game

#include <iostream>
using namespace std;

int main() {
	int n, round;
	while (cin >> n >> round) {
		int score[501] = { 0 };
		int win = -1;
		if (n == 0 && round == 0)break;

		for (int i = 1; i <= round; i++) {
			for (int j = 1; j <= n; j++) {
				int x; cin >> x;
				score[j] += x;
			}
		}

		int idx = 0;
		for (int i = 1; i <= n; i++) {
			if (score[i] >= win) {
				win = score[i];
				idx = i;
			}
		}
		cout << idx << '\n';
	}
}
