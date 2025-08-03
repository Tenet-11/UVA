// CPE 一星題
// e507. 10252 - Common Permutation

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(char& a, char& b) {
	return a < b;
}

int main() {
	string a, b;
	while (cin >> a >> b) {
		vector<char> alpha;
		vector<char> result;
		for (char c : a) {
			alpha.push_back(c);
		}

		for (char c : b) {
			for (int i = 0; i < alpha.size(); i++) {
				if (c == alpha[i]) {
					result.push_back(c);
					alpha.erase(alpha.begin() + i); //不能用alpha.erase([i]) 這種寫法
					break;
				}
			}
		}

		sort(result.begin(), result.end(), compare);

		for (char c : result) {
			cout << c;
		}
		cout << endl;
	}
	
}
