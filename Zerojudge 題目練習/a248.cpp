#include <iostream>
#include <vector>
using namespace std;

// 大數除法 (用小學直式想)
int main() {
	int a, b, N;
	while (cin >> a >> b >> N) {
		int q = a / b;
		cout << q << ".";

		int r = a % b;
		vector <int>frac;
		for (int i = 0; i < N; i++) {
			r *= 10;
			int x = r / b;
			r = r % b;
			frac.push_back(x);
		}

		for (int i = 0; i < N; i++) {
			cout << frac[i];
		}
		cout << endl;
	}
}
