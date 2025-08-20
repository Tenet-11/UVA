// CPE 二星題
// e591. 11264 - Coin Collector

#include <iostream>
#include <vector>
using namespace std;

// Greedy 貪婪演算法
// 貪婪條件: sum + coin < next coin
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		vector<int> coins;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			coins.push_back(x);
		}

		int count = 1; // 第一個硬幣
		long long sum = coins[0];

		for (int i = 1; i < n - 1; i++) {
			if (sum + coins[i] < coins[i + 1]) {
				count++;
				sum += coins[i];
			}
		}
		count++; // 最後一個硬幣
		cout << count << endl;
	}
}
