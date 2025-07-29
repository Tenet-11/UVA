// CPE 一星題
// d097. 10038 - Jolly Jumpers

#include <iostream>

using namespace std;

int main() {
	int length;

	// 這題要讓他不斷輸入(超無聊的)
	while (cin >> length) {
		int num[3000];
		for (int i = 0; i < length; i++) {
			cin >> num[i];
		}

		int check[3000] = { 0 };
		for (int i = 1; i < length; i++) {
			int a = num[i] - num[i - 1];
			if (a < 0) {
				a = -a;
			}
			check[a] = 1;
		}

		bool result = true;
		for (int i = 1; i < length - 1; i++) { // 記得check矩陣從1開始
			if (check[i] == 0) {
				result = false;
				break;
			}
		}

		if (result == false) {
			cout << "Not jolly" << endl;
		}
		else cout << "Jolly" << endl;
	}
}
