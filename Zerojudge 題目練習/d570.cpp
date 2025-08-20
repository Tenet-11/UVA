#include <iostream>
using namespace std;
int main() {
	int a;

	while (cin >> a) {
		while (a / 10 != 0) {
			cout << a << "\n";
			a = a / 10;
		}
		cout << a << endl;
	}
}
