// CPE 一星題
// f709. 12019 - Doom's Day Algorithm

#include <iostream>
using namespace std;

// 2011 1月1號禮拜六 (偷吃步)
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int month, day;
		cin >> month >> day;

		if (month > 1) {
			day += 31;
		}
		if (month > 2) {
			day += 28;
		}
		if (month > 3) {
			day += 31;
		}
		if (month > 4) {
			day += 30;
		}
		if (month > 5) {
			day += 31;
		}
		if (month > 6) {
			day += 30;
		}
		if (month > 7) {
			day += 31;
		}
		if (month > 8) {
			day += 31;
		}
		if (month > 9) {
			day += 30;
		}
		if (month > 10) {
			day += 31;
		}
		if (month > 11) {
			day += 30;
		}

		string Day_of_week[] = { "Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
		int week_of_day = day % 7;
		cout << Day_of_week[week_of_day] << endl;

	}
}
