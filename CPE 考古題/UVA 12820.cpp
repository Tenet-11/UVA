// CPE 一星題
// CPE 考古題: 2019/12
// e706. 12820 - Cool Word
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
	int t;
	int Case = 0;
	
	while (cin >> t) {
		int count = 0;
		while (t--) {
			string s; cin >> s;
			map<char, int> ch;

			for (char c : s) {
				ch[c]++;
			}

			if (ch.size() > 1) {
				set<int>freq;
				for (auto& p : ch) {
					freq.insert(p.second);
				}
				if (ch.size() == freq.size()) {
					count++;
				}
			}
		}
		cout << "Case " << ++Case << ": " << count << '\n';
	}
}
