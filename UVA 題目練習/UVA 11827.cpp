// a158. 11827 - Maximum GCD

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int GCD(int a, int b) {
	while (b) {
		int t = a % b;
		a = b;
		b = t;
	}
	return a;
}

int main() {
	int N;
	cin >> N;
	cin.ignore();
	while (N--) {
		string line;
		getline(cin, line);
		istringstream iss(line);

		vector<int> nums;
		int x;
		while (iss >> x)nums.push_back(x);

		int max_gcd = 1;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				int gcd = GCD(nums[i], nums[j]);
				if (gcd > max_gcd)max_gcd = gcd;
			}
		}
		cout << max_gcd << endl;
	}
}
