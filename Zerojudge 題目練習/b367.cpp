#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		int matrix[a][b];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cin >> matrix[i][j];
			}
		}

		int r_matrix[a][b];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				r_matrix[a - 1 - i][b - 1 - j] = matrix[i][j];
			}
		}
		bool check = true;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (matrix[i][j] != r_matrix[i][j]) {
					check = false;
					break;
				}
				if (!check)break;
			}
		}
		if (!check) {
			cout << "keep defending\n";
		}
		else cout << "go forward\n";
		
	}
}
