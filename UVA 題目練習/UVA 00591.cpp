// 難度 CPE一星
// c067. 00591 - Box of Bricks

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int count = 0;
	while (cin >> n) {
		if (n == 0)break;

		vector<int>brick;
		
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			brick.push_back(x);
		}

		int total = 0, diff = 0;
		for (int i = 0; i < n; i++) {
			total += brick[i];
		}

		int avg = total / n;
		for (int i = 0; i < n; i++) {
			diff += abs(brick[i] - avg);
		}
		cout << "Set #" << ++count << endl;
		cout << "The minimum number of moves is " << diff / 2 << ".\n\n";
	}
}
