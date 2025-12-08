// CPE 一星題
// CPE 考古題: 2025/3
// a539. 10327 - Flip Sort

#include <iostream>
using namespace std;

// bubble sort 的精神是：每一輪從「陣列最左邊」開始，一路把「大數」往右邊推

int main() {
	int N;
	while (cin >> N) {
		int cons[1000];
		for (int i = 0; i < N; i++) {
			cin >> cons[i];
		}

		int min = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N - 1 - i; j++) {
				if (cons[j] > cons[j + 1])  {
					int temp = cons[j + 1];
					cons[j + 1] = cons[j];
					cons[j] = temp;
					min++;
				}
			}
		}
		cout << "Minimum exchange operations : " << min << '\n';
	}
}
