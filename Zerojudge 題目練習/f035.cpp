#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "";
	string line;
	getline(cin, line);

	bool first = false;
	// 把字元強制轉型成ASCll碼
	for (char &c : line) {
		if (!first) {
			cout << (int)c;
			first = true;
			continue;
		}
		cout << "_" << (int)c;
	}
}
