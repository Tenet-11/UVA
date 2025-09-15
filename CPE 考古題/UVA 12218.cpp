// CPE 二星題
// CPE 考古題: 2021/3
// f711. 12218 - An Industrial Spy

#include <iostream>
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;

static const int MAX_V = 9999999;
vector<bool>prime;
int cnt[10]; // 紀錄每個數字剩幾張 (組合常用)
int answer;

// 埃式篩質數 (好用要學)
void sieve() {
	prime.assign(MAX_V + 1, true); // vector用assign
	prime[0] = prime[1] = false;
	for (int i = 2; i < sqrt(MAX_V); i++) {
		if (prime[i] == false)continue;
		for (int j = i * i; j <= MAX_V; j = j + i) {
			prime[j] = false;
		}
	}
}

// 找組合數的作法
void dfs(int cur, bool started) {
	for (int d = 0; d <= 9; d++) {
		if (cnt[d] == 0)continue;
		if (!started && d == 0)continue;

		cnt[d]--;
		int next = cur * 10 + d;
		if (prime[next])answer++;
		dfs(next, true);
		cnt[d]++;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	sieve();
	while (t--) {
		string s;
		cin >> s; //這邊很細節，如果單純用int的話011會直接看成11，0就不會加入組合
		memset(cnt, 0, sizeof(cnt));
		for (char c : s) {
			cnt[c - '0']++;
		}
		answer = 0;
		dfs(0, false);
		cout << answer << '\n';
	}
}
