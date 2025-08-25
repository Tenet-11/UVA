// CPE 一星題
// CPE 考古題: 2019/03/26
// a743. 10420 - List of Conquests

#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
	int n;
	cin >> n;
	cin.ignore();

	map<string, int> country_count;
	for (int i = 0; i < n; i++) {
		string country;
		cin >> country;
		string name;
		getline(cin, name);

		country_count[country]++;
	}
	for (auto it : country_count) {
		cout << it.first << " " << it.second << endl;
	}
}
