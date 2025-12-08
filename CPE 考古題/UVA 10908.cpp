// CPE 一星題
// CPE 考古題: 2024/5
// e575. 10908 - Largest Squares

#include <iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		char alpha[1000][1000];
		int M, N, Q;
		cin >> M >> N >> Q;
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				cin >> alpha[i][j];
			}
		}

		cout << M << " " << N << " " << Q << '\n';
		while (Q--) {
			int r, c;
			cin >> r >> c;
			char center = alpha[r][c];

			int k = 1; //外框檢查到哪了
			int ans = 1;
			while (1) {
				//檢查邊界
				if (r - k < 0 || r + k >= M || c - k < 0 || c + k >= N) {
					break;
				}
				bool ok = true;

				// 檢查上下橫排
				for (int j = c - k; j <= c + k; j++) {
					if (alpha[r - k][j] != center)ok = false;
					if (alpha[r + k][j] != center)ok = false;
				}

				// 檢查左右直排
				for (int i = r - k; i <= r + k; i++) {
					if (alpha[i][c - k] != center)ok = false;
					if (alpha[i][c + k] != center)ok = false;
				}
				if (!ok)break;
				ans = 2 * k + 1; // 更新最大邊長
				k++;
			}
			cout << ans << '\n';
		}
	}
}
