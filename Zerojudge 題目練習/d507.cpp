#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(3);
	cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end());

	int a = v[0], b = v[1], c = v[2];
	if (a * a + b * b == c * c) {
		cout << "right triangle";
	}
	else if (a * a + b * b > c * c) {
		cout << "acute triangle";
	}
	else {
		cout << "obtuse triangle";
	}
}
