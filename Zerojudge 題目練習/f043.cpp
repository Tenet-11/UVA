#include <iostream>
#include <string>
using namespace std;

int main() {
	int R, A;
	cin >> R >> A;
	if (R == A) {
		A -= 3;
	}

	int B = R - A;
	if (A > B) {
		int temp = B;
		B = A;
		A = temp;
	}
	cout << A << "+" << B << "=" << R;
}
