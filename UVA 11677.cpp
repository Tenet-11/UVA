// CPE 一星題
// CPE 考古題 2019/12/17
// d669. 11677 - Alarm Clock

#include <iostream>
using namespace std;

int main() {
	int h1, m1, h2, m2;
	while (cin >> h1 >> m1 >> h2 >> m2) {
		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
			break;
		}
		int cur = h1 * 60 + m1;
		int alarm = h2 * 60 + m2;

		// 如果現在時間比鬧鐘多代表會換日
		if (cur > alarm) {
			alarm += 24 * 60;
		}
		cout << alarm - cur << endl;
	}
}
