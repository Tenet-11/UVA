// CPE 一星題
// CPE 考古題: 2020/6
// n731. 10188 - Automated Judge Script

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int main() {
	int count = 0;
	while (cin >> n) {
		cin.ignore();
		vector<string> s1;
		vector<string> s2;
		if (n == 0)break;
		for (int i = 0; i < n; i++) {
			string s;
			getline(cin, s);
			s1.push_back(s);
		}

		cin >> m;
		cin.ignore();
		for (int i = 0; i < m; i++) {
			string s;
			getline(cin, s);
			s2.push_back(s);
		}

		bool check = true;
		for (int i = 0; i < n; i++) {
			if (s1[i].size() == s2[i].size()) {
				for (int j = 0; j < s1[i].size(); j++) {
					if (s1[i][j] != s2[i][j]) {
						check = false;
						break;
					}
				}
			}
			else check = false;
			if (!check)break;
		}
		if (check) {
			cout << "Run #" << ++count << ": Accepted\n";
			continue;
		}


		
		string d1, d2;                                          
		for (int i = 0; i < n; ++i)
			for (char ch : s1[i])
				if (isdigit(ch)) d1.push_back(ch);

		for (int i = 0; i < m; ++i)
			for (char ch : s2[i])
				if (isdigit(ch)) d2.push_back(ch);


		if (d1 == d2)  {
			cout << "Run #" << ++count << ": Presentation Error\n";
		}
		else {
			cout << "Run #" << ++count << ": Wrong Answer\n";
		}
	}
}
