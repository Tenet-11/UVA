// a133. 10066 - The Twin Towers

#include <iostream>
#include <vector>
using namespace std;

int LCS(int* con_1, int* con_2, int m, int n)  {
	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
	
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (con_1[i - 1] == con_2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[m][n];
}

// LCS要比較的是整個序列，不是單一個索引位置 (建dp表)
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	int count = 0;
	while (cin >> m >> n) {
		if (m == 0 && n == 0)break;

		int con_1[100] = { 0 };
		int con_2[100] = { 0 };

		for (int i = 0; i < m; i++) {
			cin >> con_1[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> con_2[i];
		}
		int ans = LCS(con_1, con_2, m, n);
		cout << "Twin Towers #" << ++count << '\n';
		cout << "Number of Tiles : " << ans << '\n' << '\n';
	}

}
