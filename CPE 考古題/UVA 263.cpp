// CPE 二星題
// CPE 考古題: 2020/5
// f445. 263 - Number Chains

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int func(int n, int& count) {
	int freq[10] = { 0 };  // 計數桶 (每個數字出現次數)
	if (n == 0) freq[0] = 1;
	while (n > 0) {
		freq[n % 10]++;
		n /= 10;
	}

	int desc = 0, asc = 0;
	for (int d = 9; d >= 0; d--) {
		while (freq[d]--) desc = desc * 10 + d;
	}

	// 重新建構（因為 freq 用掉了）
	int tmp = desc, freq2[10] = { 0 };
	if (tmp == 0) freq2[0] = 1;
	while (tmp > 0) { freq2[tmp % 10]++; tmp /= 10; }
	for (int d = 0; d <= 9; ++d) {
		while (freq2[d]--) asc = asc * 10 + d;
	}

	int diff = desc - asc;
	++count;
	cout << desc << " - " << asc << " = " << diff << '\n';
	return diff;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n;
	while (cin >> n) {
		if (n == 0)break;
		cout << "Original number was " << n << '\n';
		
		set<long long> seen;
		int count = 0;
		bool check = false;
		while (1) {
			long long result = func(n, count);
			if (seen.count(result)) {
				cout << "Chain length " << count << '\n' << '\n';
				check = true;
				break;
			}
			seen.insert(result);
			n = result;
		}
		if (check)continue;
	}
}
