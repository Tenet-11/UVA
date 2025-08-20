// dp 基礎題 (其實就找規律)
// d261. 11000 - Bee

#include <iostream>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		if (n == -1)break;

		long long int male[50], female[50];
		male[0] = 0, male[1] = 1, male[2] = 2; male[3] = 4, male[4] = 7;
		female[0] = 1; female[1] = 1, female[2] = 2, female[3] = 3, female[4] = 5;

		for (int i = 4; i < 50; i++) {
			male[i] = male[i - 1] + female[i - 1];
			female[i] = male[i - 1] + 1;
		}
		cout << male[n] << " " << male[n] + female[n] << endl;
	}
}
