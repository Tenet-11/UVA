// CPE 一星題
// c813. 11332 - Summing Digits

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	while (1) {
		cin >> num;
		if (num == 0)break;

		vector<int> digit;
		while (num >= 10) {
			while (num != 0) {
				int x = num % 10;
				num /= 10;
				digit.push_back(x);
			}
			for (int i : digit) {
				num += i;
			}
			digit.clear(); //清空vector
		}
		cout << num << endl;
	}	
}
