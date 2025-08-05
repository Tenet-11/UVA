// CPE 一星題
// c022. 10783 - Odd Sum

#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		int count = 0;
		for (int j = a; j <= b; j++) {
			if (j % 2 == 1)count += j;
		}
		cout << "Case " << i + 1 << ": " << count << endl;
	}
}
