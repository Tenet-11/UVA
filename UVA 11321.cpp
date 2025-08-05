// CPE 一星題
// d750. 11321 - Sort! Sort!! and Sort!!!

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

bool compare(int a, int b) {
	int r1 = a % M;
	int r2 = b % M;

	// 第一層
	if (r1 != r2) return r1 < r2;

	// 第二層
	bool a_odd = abs(a % 2) != 0;
	bool b_odd = abs(b % 2) != 0;

	if (a_odd != b_odd) {
		return a_odd;
	}
	if (a_odd)return a > b;
	else return b > a;
}

int main() {
	while (1) {
		cin >> N >> M;
		vector<int> num;
		if (N == 0 && M == 0) {
			cout << 0 << " " << 0;
			break;
		}
		for (int i = 0; i < N; i++) {
			int x;
			cin >> x;
			num.push_back(x);
		}
		sort(num.begin(), num.end(), compare);
		cout << N << " " << M << endl;
		for (int p : num) {
			cout << p << endl;
		}
	}

}
