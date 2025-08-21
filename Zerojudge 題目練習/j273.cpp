#include <iostream>
#include <map>
using namespace std;

int main() {
	int n; cin >> n;
	
	map<int, int> count;
	for (int i = 0; i < n; i++) {
		int seat; cin >> seat;
		count[seat]++;
	}
	for (auto& p : count) {
		cout << p.first << " " << p.second << endl;
	}
}
