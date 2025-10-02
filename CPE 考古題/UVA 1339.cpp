// CPE 一星題
// CPE 考古題: 2022/10
// j121. 01339 - Ancient Cipher

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		int a = s1.size();
		int b = s2.size();
		if (a != b) {
			cout << "NO\n";
			continue;
		}

		vector<int>v1(26, 0);
		vector<int>v2(26, 0);
		for (char c : s1) {
			v1[c - 'A']++;
		}
		for (char c : s2) {
			v2[c - 'A']++;
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());

		bool check = true;
		for (int i = 0; i < 26; i++) {
			if (v1[i] != v2[i]) {
				check = false;
				break;
			}
		}
		if (!check) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
}
