#include <iostream>
using namespace std;

int main() {
	int N;
	while (cin >> N) {
		int k = 1;
		int total = 0;

		while (total < N) {
			total = k * (k + 1) / 2;
			k++;
		}

		k--; // 數字 N 所在對角線編號

		int prev = (k - 1) * k / 2;
		int diff = N - prev;

		int up = 0, down = 0;
		if (k % 2 == 1) { // 右下開始
			up = k - diff + 1;
			down = diff;
		}
		else { //左上開始
			up = diff;
			down = k - diff + 1;
		}

		cout << "TERM " << N << " IS " << up << '/' << down << '\n';
	}
}
