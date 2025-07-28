// CPE 一星題
// c045. 00490 - Rotating Sentences

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = -1, max_length = 0, used = 0;
	string w[100];

	while (getline(cin, w[n + 1])) {
		n++;
		if (w[n].size() > max_length) {
			max_length = w[n].size();
		}
	}

	for (int i = 0; i < max_length; i++) {
		for (int j = n; j >= 0; j--) {
			if (w[j].size() >= i + 1) {
				cout << w[j][i];
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
