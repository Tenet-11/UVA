#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	string num = s.substr(1); // 從索引1開始跑到字串結尾
	while (num.size() < 3) {
		num = '0' + num;
	}
	cout << s[0] << num;
}
