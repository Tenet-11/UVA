// CPE 一星題
// c014. 10035 - Primary Arithmetic

#include <iostream>

using namespace std;

int main() {
	int n1, n2;
	while (1) {
		cin >> n1 >> n2;
		if (n1 == 0 && n2 == 0) {
			return 0;
		}
		int carry = 0;
		int num = 0;

		// 這行邏輯搞錯，應該要兩個數字都是0才結束，不然會有999+999這個測資錯
		while (n1 != 0 || n2 != 0) {
			int a = n1 % 10;
			int b = n2 % 10;
			
			if (a + b + num >= 10) {
				carry++;
				num = 1;
			}
			else {
				num = 0;
			}
			n1 /= 10, n2 /= 10;
		}
		
		if (carry == 0) {
			cout << "No carry operation." << endl;
		}
		else if (carry==1) {
			cout << "1 carry operation." << endl;
		}
		else {
			cout << carry << " carry operations." << endl;
		}
	}
}
