// CPE 一星題
// CPE 考古題: 2021/12
// i855. 01260 - Sales

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) {
		int m[1001];
		int num; cin >> num;
		for (int i = 1; i <= num; i++) {
			cin >> m[i];
		}

		int add = 0;
		for (int i = 2; i <= num; i++)  {
			for (int j = 1; j < i; j++) {
				if (m[i] >= m[j]) {
					add++;
				}
			}
		}
		cout << add << '\n';
	}
}
