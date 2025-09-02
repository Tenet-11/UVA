#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while (cin >> n) {
		if (n == 0)break;
		int matrix[100];
		int i = 0;
		while (n > 0) {
			matrix[i] = n % 2;
			n /= 2;
			i++;
		}
		
		int count = 0;
		int j = 0;
		if (matrix[j] == 0) {
			cout << 0 << '\n';
			continue;
		}
		while (matrix[j] == 1 && i >= j) {
			count++;
			j++;
		}
		if (j > i)count++;
		cout << count << '\n';
	}
}
