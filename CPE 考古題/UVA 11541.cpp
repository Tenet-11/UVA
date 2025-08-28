// CPE 一星題
// 2019/9/24
// e208. 11541 - Decoding

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int t; cin >> t;
	int count = 0;
	while (t--) {
		string s; cin >> s;
		string num = "";
		bool first = true;
		char alpha = '0';

		cout << "Case " << ++count << ": ";
		for (char c : s) {
			if (isupper(c)) {
				if (!first) {
					for (int i = 1; i <= stoi(num); i++) {
						cout << alpha;
					}
				}
				alpha = c;
				num = "";
				first = false;
			}
			else if (isdigit(c)) {
				num += c; // append加法 (在字串尾端添加)
			}
		}
		for (int i = 1; i <= stoi(num); i++) { // 印最後部分
			cout << alpha;
		}
		cout << '\n';
	}
}
