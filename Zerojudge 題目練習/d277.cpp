#include <iostream>
using namespace std;

// 題目小北爛 (沒說多行測資)
int main() {
	int n;
	while (cin >> n) {
		if (n % 2 == 0 || n == 0) {
			cout << n << endl;
		}
		else cout << n - 1 << endl;
	}
}
