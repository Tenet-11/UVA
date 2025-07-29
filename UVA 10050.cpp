// CPE 一星題
// e579. 10050 - Hartals

#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;

	for (int j = 0; j < test; j++) {
		int P, N;
		cin >> N >> P;

		int hi[200]; // 存放政黨罷會參數的陣列
		for (int i = 0; i < P; i++) {
			cin >> hi[i];
		}

		// 這題超靠北，太短不夠，太長又會超出stack區。
		// 本來不想這樣寫，因為用變數表達陣列數量VSC執行不了，但批改系統可以，我去你的。
		int total_Day[N+1] = { 0 };

		for (int k = 0; k < P; k++) {
			for (int i = 1; i <= N; i++) {
				if (i % hi[k] == 0) {
					total_Day[i] = 1;
				}
			}
		}

		for (int i = 1; i <= N; i++) {
			if (i % 7 == 6 || i % 7 == 0) {
				total_Day[i] = 2;
			}
		}

		int result = 0;
		for (int i = 1; i <= N; i++) {
			if (total_Day[i] == 1) {
				result++;
			}
		}
		cout << result << endl;
	}
}
