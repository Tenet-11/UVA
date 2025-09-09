// CPE 二星題
// CPE 考古題: 2020/12
// n732. 11960 - Divisor Game

#include <iostream>
using namespace std;

int table[1000001];
int Ans[1000001];

void Create() {
	table[1000001] = { 0 };
	int max = 0, ans = 0;

	// 統計每數的因數總數
	for (int i = 1; i <= 1000000; i++) {
		for (int j = i; j <= 1000000; j = j + i)  {
			table[j] += 1;
		}
	}

	for (int i = 1; i <= 1000000; i++) {
		if (max <= table[i]) {
			max = table[i];
			ans = i;
			Ans[i] = ans;
		}
		else {
			Ans[i] = ans;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	Create();

	int T; cin >> T;
	while (T--) {
		int N;
		cin >> N;

		cout << Ans[N] << '\n';
	}
}
