// CPE 一星題
// c004. 10812 - Beat the Spread!

#include <iostream>
using namespace std;


int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		int s, d;
		cin >> s >> d;
		bool check = true;
		if (s < d) {
			check = false;
			cout << "impossible" << endl;
			continue;
		}
		if ((s + d) % 2 != 0) {
			check = false;
			cout << "impossible" << endl;
			continue;
		}
		int a = (s + d) / 2;
		int b = s - a;
		cout << a << " " << b << endl;
		
	}
}
