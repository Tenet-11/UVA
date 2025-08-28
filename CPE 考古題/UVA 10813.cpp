// CPE 一星題
// CPE考古題: 2019/9/24
// e599. 10813 - Traditional BINGO

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int note[5][5] = { 0 };
bool Bingo() {
	int sum;

	// 確認rows
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += note[i][j];
		}
		if (sum == 5)return true;
	}

	// 確認column
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += note[j][i];
		}
		if (sum == 5)return true;
	}

	// 確認對角線 (左上右下，右下左上)
	sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += note[i][i];
	}
	if (sum == 5)return true;

	sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += note[i][4 - i];
	}
	if (sum == 5)return true;

	return false;
	
}

int main() {
	int t; cin >> t;
	while (t--) {
		string num[5][5];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (i == 2 && j == 2) {
					num[i][j] = "0";
					continue;
				}
				cin >> num[i][j];
			}
		}
		memset(note, 0, sizeof(note));
		note[2][2] = 1;
		int container[75] = { 0 };
		for (int i = 0; i < 75; i++) {
			cin >> container[i];
		}
		for (int i = 0; i < 75; i++) {
			int x = container[i];

			for (int i = 0; i < 5; i++) {
				bool check = false;
				for (int j = 0; j < 5; j++) {
					if (x == stoi(num[i][j])) {
						note[i][j] = 1;
						check = true;
						break;
					}
				}
				if (check)break;
			}
			if (i >= 3) {
				bool ans = Bingo();
				if (ans) {
					cout << "BINGO after " << i + 1 << " numbers announced\n";
					break;
				}
				else {
					continue;
				}
			}
		}
	}
}
