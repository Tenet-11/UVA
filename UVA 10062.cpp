// CPE 一星題
// c012. 10062 - Tell me the frequencies!

#include <iostream>
#include <string> // 用在getline上
#include <vector>
#include <map>
#include <algorithm> // 用在sort上
using namespace std;

int main() {
	string s;
	while (getline(cin,s)) { // 這裡陷阱，用cin會錯，因為讀入的字串可能有空格
		map<char, int> ASC;
		vector<pair<char, int>> container;

		for (char c : s) {
			ASC[c]++;
		}

		for (auto x : ASC) {
			container.push_back(x);
		}

		sort(container.begin(), container.end(), [](const auto& a, const auto& b) {
			if (a.second != b.second) {
				return a.second < b.second;
			}
			return a.first > b.first;
			});

		for (auto it : container) {
			if (it.first > 0) {
				cout << (int)it.first << " " << it.second << endl; //這裡偷吃步，把'A'直接轉成65
			}
		}
		cout << endl << endl;
	}
}
