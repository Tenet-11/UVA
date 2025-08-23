// TOI練習賽201903新手組第3題

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int money;
	int t;
	cin >> money >> t;

	int time = 0;
	int K; cin >> K;

	bool check = false;
	while (1) {
		if (K == 0) { // 吃蘋果派
			if (money < 32 && check == false) {
				cout << "Wayne can't eat and drink." << endl;
				break;
			}
			check = true;
			if (money < 32) {
				break;
			}
			money -= 32;
			if (money == 0) {
				cout << time << ": Wayne eats an Apple pie, and now he doesn't have money.";
				break;
			}
			if (money == 1) {
				cout << time << ": Wayne eats an Apple pie, and now he has 1 dollar.";
				break;
			}
			cout << time << ": Wayne eats an Apple pie, and now he has " << money << " dollars." << endl;
			
			time += t;
			K++;
		}
		else { // 喝玉米濃湯
			if (money < 55 && check == false) {
				cout << "Wayne can't eat and drink." << endl;
				break;
			}
			check = true;
			if (money < 55) {
				break;
			}
			money -= 55;
			if (money == 0) {
				cout << time << ": Wayne drinks a Corn soup, and now he doesn't have money.";
				break;
			}
			if (money == 1) {
				cout << time << ": Wayne drinks a Corn soup, and now he has 1 dollar.";
				break;
			}
			cout << time << ": Wayne drinks a Corn soup, and now he has " << money << " dollars." << endl;

			time += t;
			K--;
		}
	}
}
