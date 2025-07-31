// CPE 一星題

#include <iostream>

using namespace std;

// 這題滿難的
int getvalue(char c) {
	if (isdigit(c)) return c - '0';
	if (isupper(c)) return c - 'A' + 10;
	if (islower(c)) return c - 'a' + 36;
	return -1;
}

int main() {
	string s;
	while (cin >> s) {
		int max_digit = 0;
		int start = 0;
		if (s[0] == '+' || s[0] == '-') {
			start = 1;
		}
		for (int i = start; i < s.length(); i++)
		{
			int value = getvalue(s[i]);
			if (value > max_digit) max_digit = value;
		}


		bool found = false;
		for (int base = max_digit + 1; base <= 62; base++) {
			long long int  Value = 0; // 放值
			for (int j = start; j < s.length(); j++) {
				Value = Value * base + getvalue(s[j]);
			}

			if (Value % (base - 1) == 0) {
				cout << base << endl;
				found = true;
				break;
			}
		}

		if (!found) {
			cout << "such number is impossible!" << endl;
		}
	}
}
