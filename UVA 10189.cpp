// CPE 一星題
// e605. 10189 - Minesweeper


#include <iostream>
using namespace std;

// 建立一個周圍檢測系統
int dx[] = { -1,-1,-1,0,0,1,1,1 };
int dy[] = { -1,0,1,-1,1,-1,0,1 };

int main() {
	int n, m;
	int test = 0;
	char map[100][100];
	while (1) {
		cin >> n >> m;
		if (n == 0 && m == 0) {
			return 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int count = 0;
				if (map[i][j] != '*') {
					for (int k = 0; k < 8; k++) {
						int ii = i + dx[k];
						int jj = j + dy[k];
						if (map[ii][jj] == '*' && ii>=0 && jj>=0 && ii<n && jj< m ) { // 記得考慮邊界
							count++;
						}
					}
					// 要轉成數字的字元 正確 的寫法
					map[i][j] = count + '0';
				}
				
			}
		}

		// 印出
		test++;
		cout << "Field #" << test << ":\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << map[i][j];
			}
			cout << endl;
		}
		cout << endl << endl;
	}
}
