#include<iostream>
#include <string>
using namespace std;

int main() {
	string line;
	getline(cin, line);

	cout << line << '\n';
	for (int i = 0; i < line.size(); i++) {
		cout << "~";
	}
}
