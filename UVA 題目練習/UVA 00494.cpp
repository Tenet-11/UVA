// a011. 00494 - Kindergarten Counting Game

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		int count = 0;
		bool sameWord = false; // 看是否在同一個單字裡
		for (int i = 0; i < s.size(); i++) {
			if (isalpha(s[i])) {
				if (!sameWord) {
					count++;
					sameWord = true;
				}
			}
			else sameWord = false;
		}
		cout << count << endl;
	}
}
