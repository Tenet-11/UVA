// CPE 一星題
// e555. 10170 - The Hotel with Infinite Rooms

#include <iostream>

using namespace std;
int main() {
	// 因為S跟D很大(開long long)
	long long int S, D;
	while (cin >> S >> D) {
		while (D > 0) {
			D -= S;
			S++;
		}
		cout << S - 1 << endl;
	}
}
