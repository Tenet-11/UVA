// CPE 二星題
// d253. 00674 - Coin Change
// DP 找零問題

#include <iostream>
#include <vector>
using namespace std;

int coins[] = { 1,5,10,25,50 };
long long int ways(int n) {
	vector<long long int> dp(n + 1, 0);
	dp[0] = 1;
	
	// 這做法非常強大
	for (int c : coins) {
		for (long long s = c; s <= n; s++) {
			dp[s] += dp[s - c];
		}
	}
	return dp[n];
}

// 換錢的組合數 (dp 動態規劃)
int main() {
	int n;
	while (cin >> n) {
		if (n == 0) {
			cout << 1 << endl;
			continue;
		}

		cout << ways(n) << endl;
	}
}
