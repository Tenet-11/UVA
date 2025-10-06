// CPE 二星題
// CPE 考古題: 2022/10
// j122. 11957 - Checkers

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MOD = 1000007;
vector<string> board;
int N;
int dp[105][105];

int dfs(int y, int x) {
	if (y == 0)return 1;
	if (dp[y][x] != -1) {
		return dp[y][x];
	}

	long long ways = 0;
	// 嘗試左上
	if (y - 1 >= 0 && x - 1 >= 0) {
		if (board[y - 1][x - 1] == 'B') {
			if (y - 2 >= 0 && x - 2 >= 0 && board[y - 2][x - 2] == '.')  {
				ways += dfs(y - 2, x - 2);
			}
		}
		else {
			ways += dfs(y - 1, x - 1);
		}
	}

	// 嘗試右上
	if (y - 1 >= 0 && x + 1 < N) {
		if (board[y - 1][x + 1] == 'B') {
			if (y - 2 >= 0 && x + 2 < N && board[y - 2][x + 2] == '.')  {
				ways += dfs(y - 2, x + 2);
			}
		}
		else {
			ways += dfs(y - 1, x + 1);
		}
	}

	dp[y][x] = ways % MOD;
	return dp[y][x];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T; cin >> T;
	int count = 0;
	while (T--) {
		cin >> N;

		// 一行一行字串被丟進去
		board.assign(N, ""); // vector可以用assign來指派
		for (int i = 0; i < N; i++) {
			cin >> board[i];
		}

		
		memset(dp, -1, sizeof(dp));
		int sx, sy;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (board[i][j] == 'W') {
					sy = i, sx = j;
				}
			}
		}
		int ans = dfs(sy, sx);
		cout << "Case " << ++count << ": " << ans << '\n';
	}
}
