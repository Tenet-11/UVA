#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, T;
	cin >> N >> T;

	if (T == 0) {
		cout << 0;
		return 0;
	}

	if (N != 1) {
		T /= N;
		N = 1;
	}

	int p = log(T) / log(2);
	cout << p + 1;
}
