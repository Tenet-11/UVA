// CPE 二星題
// CPE 考古題: 2021/12
// i959. 11078 - Open Credit System

#include <iostream>
#include <climits>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int matrix[100001];
		for (int i = 1; i <= n; i++) {
			cin >> matrix[i];
		}

		int max_diff = INT_MIN;
		int max_value = matrix[1];
		for (int i = 2; i <= n; i++) {
			if (max_value - matrix[i] > max_diff)  {
				max_diff = max_value - matrix[i];
			}
			if (matrix[i] > max_value) {
				max_value = matrix[i];
			}
		}
		cout << max_diff << '\n';
	}
}
