// CPE 二星題
// c001. 10405 - Longest Common Subsequence


#include <iostream>
#include <vector>
using namespace std;

// 最長共同子序列 (給兩串string)
int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		int a = s1.size();
		int b = s2.size();

		vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if (s1[i - 1] == s2[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else {
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				}
			}
		}
		cout << dp[a][b] << '\n';
	}
}
