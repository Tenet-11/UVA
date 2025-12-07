// CPE 二星題
// CPE 考古題: 2024/4
// d132. 00340 - Master-Mind Hints

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int num;
	int count_game = 0;
	while (cin >> num) {
		if (num == 0)break;

		vector<int>ans(num);
		for (int i = 0; i < num; i++) {
			cin >> ans[i];
		}
		cout << "Game " << ++count_game << ":\n";
		while (1) {
			vector<int>option(num);
			vector<bool> used_A(num, false);
			vector<bool> used_B(num, false);


			bool ended = true;
			for (int i = 0; i < num; i++) {
				int x; cin >> x;
				if (x != 0)ended = false;
				option[i] = x;
			}
			if (ended)break;

			// 開始比較幾A幾B的邏輯
			int count_A = 0, count_B = 0;
			for (int i = 0; i < num; i++) {
				if (ans[i] == option[i]) {
					count_A++;
					used_A[i] = true;
				}
			}

			for (int i = 0; i < num; i++) {
				if (used_A[i])continue;

				for (int j = 0; j < num; j++) {
					if (used_A[j]) continue;
					if (used_B[j]) continue;

					if (option[i] == ans[j]) {
						count_B++;
						used_B[j] = true;
						break;
					}
				}
			}

			cout << "    (" << count_A << "," << count_B << ")\n";
		}



	}
}
