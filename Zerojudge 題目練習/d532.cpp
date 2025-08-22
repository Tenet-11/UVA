#include <iostream>
using namespace std;

bool leap(int n) {
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
		return true;
	}
	else return false;
}

int main() {
	int a, b;
	cin >> a >> b;
	int count = 0;
	for (int i = a; i <= b; i++) {
		if (leap(i))count++;
	}
	cout << count;
}
