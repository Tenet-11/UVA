#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int money = 0;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		money += x * i;
	}
	cout << money;
}
