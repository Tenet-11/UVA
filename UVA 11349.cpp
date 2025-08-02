// CPE 一星題


#include <iostream>
using namespace std;

// 對稱矩陣: 對稱於矩陣中心
int main() {
	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		int N;
		string a,b;  // 這題小陷阱，輸入是N=x 這樣的形式
		cin >> a >> b >> N;

		long long int matrix[100][100];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> matrix[i][j];
			}
		}

		bool check = true;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (matrix[i][j] != matrix[N-1-i][N-1-j]) {
					check = false;
					break;
				}
			}
		}

		if (check == true) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (matrix[i][j] < 0) {
						check = false;
						break;
					}
				}
			}
		}

		if (check == false) {
			cout << "Test #"<<test<<": Non-symmetric." << endl;
		}
		else cout << "Test #" << test << ": Symmetric." << endl;
	}
}
