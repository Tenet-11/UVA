#include<iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	string line;
	getline(cin, line);
	int n; cin >> n;
	stringstream ss(line);
	string w;
	vector<string> name;
	while (ss >> w) {
		name.push_back(w);
	}

	int idx = name.size() - n;
	cout << name[idx];
	
}
