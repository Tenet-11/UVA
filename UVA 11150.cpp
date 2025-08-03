// CPE 一星題
// d189. 11150 - Cola 

#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int t = n; // total
		int e = n; // empty

		for (int i = 0; e >= 3; i++) {
			int k = e / 3;
			t += k;
			e = k + (e % 3);
		}
		
		// 剩兩空瓶的話可以借一瓶
		if (e == 2) {
			t += 1;
		}
		cout << t << endl;
	}
}
