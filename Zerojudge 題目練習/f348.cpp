#include <iostream>
using namespace std;

bool com_even(int n) {
	bool check = true;
	while (n > 0) {
		int a = n % 10;
		n /= 10;
		if (a % 2 == 1)check = false;
	}
	return check;
}

int main() {
	int N;
	cin >> N;
	if (com_even(N)) {
		cout << 0;
		return 0;
	}

	int result = 0;
	int r_step = 0;
	int l_step = 0;
	int r_n = N;
	int l_n = N;

	while (!com_even(r_n)) {
		r_step++;
		r_n++;
	}
	while (!com_even(l_n)) {
		l_step++;
		l_n--;
	}
	if (r_step >= l_step) {
		cout << l_step;
	}
	else cout << r_step;
}
