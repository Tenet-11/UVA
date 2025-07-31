// CPE 一星題


#include <iostream>
#include <cmath> // 用到數學記得加這個include
using namespace std;

int main() {
	int a, b;
	while (1) {
		cin >> a >> b;
		int count = 0;
		if (a == 0 && b == 0) {
			return 0;
		}
		for (int i = a; i <= b; i++) {
			int root = sqrt(i); // 截斷小數點後
			if (root * root == i) {
				count++;
			}
		}
		cout << count << endl;
	}
}
