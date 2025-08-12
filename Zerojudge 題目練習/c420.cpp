#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int width = 2 * n - 1;
	for (int i = 1; i <= width; i += 2) {
		// 這寫法聰明，學一下

		// string(len, char) 是 C++ 的一個建構子，可以
		// 建立一個長度為 len、每個位置都是 char 的字串。
		int pad = (width - i) / 2;
		cout << string(pad, '_') << string(i, '*') << string(pad, '_') << endl;

	}
}
