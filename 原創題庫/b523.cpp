// 用set找重複

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string s;
	set<string> seen;
	while (getline(cin,s)) {
		if (seen.count(s)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
			seen.insert(s);
		}
	}
}
