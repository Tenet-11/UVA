// 字串換位

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		vector<int> pos;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'y') {
				pos.push_back(i);
			}
		}
		long long total = 0;
		for (int k = 0; k < pos.size(); k++) {
			total += abs(pos[k] - 3 * k);
		}
		cout << total << '\n';
	}
}
