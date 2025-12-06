// CPE 二星題
// CPE 考古題: 2023/12
// m302. 12428 - Enemy at the Gates

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	for (int i = 0; i < test; i++) {
		long long int country, road;
		cin >> country >> road;

		for (long long int k = 1; k <= country; k++) {
			// 核心最多邊+外面N-k條橋
			long long int maxEdges = k * (k - 1) / 2 + (country - k);
			if (maxEdges >= road) {
				cout << country - k << '\n';
				break;
			}
		}
	}
}
