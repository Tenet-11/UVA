// CPE 二星題
// CPE 考古題: 2022/3
// n708. 11360 - Having Fun with Matrices

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	int count = 0;
	while (T--) {
		int matrix[10][10];
		int N; cin >> N;
		for (int i = 0; i < N; i++) {
			string row; cin >> row;
			for (int j = 0; j < N; j++) {
				matrix[i][j] = row[j] - '0';
			}
		}

		int M; cin >> M;
		while (M--) {
			string s; cin >> s;
			if (s == "transpose") {
				int matrix2[10][10];
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						matrix2[j][i] = matrix[i][j];
					}
				}
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						matrix[i][j] = matrix2[i][j];
					}
				}
			}
			else if (s == "inc") {
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						matrix[i][j]++;
						if (matrix[i][j] > 9) {
							matrix[i][j] %= 10;
						}
					}
				}
			}
			else if (s == "dec") {
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						matrix[i][j]--;
						if (matrix[i][j] < 0) {
							matrix[i][j] += 10;
						}
					}
				}
			}
			else if (s == "row") {
				int a, b;
				cin >> a >> b;
				int matrix2[10][10];
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						matrix2[i][j] = matrix[i][j];
					}
				}
				for (int j = 0; j < N; j++) {
					matrix[a - 1][j] = matrix2[b - 1][j];
				}
				for (int j = 0; j < N; j++) {
					matrix[b - 1][j] = matrix2[a - 1][j];
				}
			}
			else {
				int a, b;
				cin >> a >> b;
				int matrix2[10][10];
				for (int i = 0; i < N; i++) {
					for (int j = 0; j < N; j++) {
						matrix2[i][j] = matrix[i][j];
					}
				}
				for (int i = 0; i < N; i++) {
					matrix[i][a - 1] = matrix2[i][b - 1];
				}
				for (int i = 0; i < N; i++) {
					matrix[i][b - 1] = matrix2[i][a - 1];
				}
			}
		}

		cout << "Case #" << ++count << '\n';
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << matrix[i][j];
			}
			cout << '\n';
		}
		cout << '\n';
	}
}
