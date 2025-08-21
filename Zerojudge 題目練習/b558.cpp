#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		int count = 1;
		int add = 0;
		while (n > 0) {
			count += add;
			n--;
			add++;
		}
		cout << count << endl;
	}
}
