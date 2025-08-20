#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count = 0;
	for (char c : s) {
		if (c == '8') {
			count++;
		}
	}
	count *= 10;

	cout << s << " can get " << count << "% off.";
}
