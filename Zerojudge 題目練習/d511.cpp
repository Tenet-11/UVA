// 判斷三數能否組成三角形

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(3);
	int add = 0;
	for (int i = 1; i <= 5; i++) {
		cin >> v[0] >> v[1] >> v[2];
		sort(v.begin(), v.end());

		if (v[0] + v[1] > v[2]) {
			add++;
		}
	}
	cout << add;
}
