#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		// 這寫法聰明，學一下
		
		// string(len, char) 是 C++ 的一個建構子，可以
		// 建立一個長度為 len、每個位置都是 char 的字串。
		cout << string(n - i, '_');
		cout << string(i, '*') << endl;
	}
}
