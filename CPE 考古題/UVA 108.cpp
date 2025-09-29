// CPE 二星題
// CPE 考古題: 2022/5
// d206. 00108 - Maximum Sum

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadane(const vector<int>& arr) {
	int cur = arr[0], best = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		cur = max(cur + arr[i], arr[i]);
		if (cur > best)best = cur;
	}
	return best;
}

int main() {
	int N;
	while (cin >> N) {
		int num[100][100];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> num[i][j];
			}
		}

		int ans = INT_MIN;
		for (int L = 0; L < N; L++) {
			vector<int>Rowsum(N, 0);
			for (int R = L; R < N; R++) {
				for (int r = 0; r < N; r++) {
					Rowsum[r] += num[r][R];
				}
				ans = max(ans, kadane(Rowsum));
			}
			
		}
		cout << ans << '\n';
	}
}
