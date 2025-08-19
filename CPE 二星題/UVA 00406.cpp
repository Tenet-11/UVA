// CPE 二星題
// d219. 00374 - Big Mod


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Prime(int n) {
	if (n == 1 || n == 2)return true;
	bool check = true;
	for (int i= 2; i < n; i++) {
		if (n % i == 0)check = false;
	}
	return check;
}

int main() {
	int N, C;
	while (cin >> N >> C) {
		vector<int> prime;
		for (int i = 1; i <= N; i++) {
			bool check = Prime(i);
			if (check)prime.push_back(i);
		}

		int K = prime.size();
		int take = (K % 2 == 0) ? 2 * C : 2 * C - 1;

		if (K % 2 == 1) { // 奇數
			if (2 * C - 1 >= K) {
				cout << N << " " << C << ":";
				for (int it : prime) {
					cout << " " << it;
				}
				cout << endl << endl;
				continue;
			}
			int start = (K - take) / 2;
			cout << N << " " << C << ":";
			for (int i = start; i < start+take; i++) {
				cout << " " << prime[i];
			}
			cout << endl << endl;
			continue;

		}
		else { // 偶數
			if (2 * C >= K) {
				cout << N << " " << C << ":";
				for (int it : prime) {
					cout << " " << it;
				}
				cout << endl << endl;
				continue;
			}
			cout << N << " " << C << ":";
			int start = (K - take) / 2;
			for (int i = start; i < start + take; i++) {
				cout << " " << prime[i];
			}
			cout << endl << endl;
			continue;
		}
	}
	
}
