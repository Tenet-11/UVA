// CPE 一星題
// c007. 00272 - TeX Quotes

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int count = 0;
	string result = "";

	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '"') {
				if (count == 0) {
					result+="``";
					count++;
				}
				else {
					result += "''";
					count--;
				}
			}
			else {
				result += s[i];
			}
		}
		result += '\n';
	}

	cout << result;
}
