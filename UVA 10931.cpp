// CPE 一星題
// a132. 10931 - Parity

#include <iostream>
#include <vector>
using namespace std;

vector<int> binary(int num) {
	vector<int>digit;
	while (num != 0) {
		int x = num % 2;
		digit.push_back(x);
		num /= 2;
	}
	return digit;
}

int main() {
	int N;
	while (cin >> N) {
		int count = 0;
		if (N == 0)break;
		
		vector<int>digit = binary(N);
		for (int i = 0; i < digit.size(); i++) {
			if (digit[i] == 1) {
				count++;
			}
		}
		
		bool top = false;
		cout << "The parity of ";
		for (int i = digit.size() - 1; i >= 0; i--) { // 最高位記得是digit.size()-1，用digit.size()超出記憶體
			if (top == true || digit[i] == 1) {
				cout << digit[i];
				top = true;
			}
		}
		cout << " is " << count << " (mod 2)." << endl;
	}
}
