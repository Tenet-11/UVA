#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string str[1000] = {};

bool compare(const string& a, const string& b) {
	// 一正一負
	if (a[0] == '-' && b[0] != '-') {
		return true;
	}
	else if (a[0] != '-' && b[0] == '-') {
		return false;
	}

	// 二正
	if (a[0] != '-' && b[0] != '-') {
		if (a.length() != b.length()) {
			return a.length() < b.length();
		}
		return a < b;
	}

	// 二負
	string a_abs = a.substr(1);
	string b_abs = b.substr(1);
	if (a_abs.length() != b_abs.length()) {
		return a_abs.length() > b_abs.length();
	}
	return a_abs > b_abs;


}

int main() {
	int num;
	while (cin >> num) {
		for (int i = 0; i < num; i++) {
			cin >> str[i];
		}
		sort(str, str + num, compare);
		for (int i = 0; i < num; i++) {
			cout << str[i] << endl;
		}
	}
}
