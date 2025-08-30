// CPE 二星題
// CPE 考古題: 2020/5
// f447. 12918 - Lucky Thief

#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int key, room;
		cin >> key >> room;

		int count = 0;
		while (key > 0) {
			count += (room - 1);
			room--;
			key--;
		}
		cout << count << endl;
	}
}
