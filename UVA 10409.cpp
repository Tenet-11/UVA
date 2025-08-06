// CPE 一星題
// e516. 10409 - Die Game

#include <iostream>
using namespace std;
 // 模擬骰子翻滾(用3個變數追蹤3面就好，因為其他3面是相對的)
int main() {
	int n;
	while (cin >> n) {
		if (n == 0)break;

		int top = 1, north = 2, west = 3;
		for (int i = 0; i < n; i++) {
			string direction;
			cin >> direction;

			if (direction == "north") {
				int temp = top;
				top = 7 - north;
				north = temp;
			}
			else if (direction == "south") {
				int temp = top;
				top = north;
				north = 7 - temp;
			}
			else if (direction == "east") {
				int temp = top;
				top = west;
				west = 7 - temp;
			}
			else {
				int temp = top;
				top = 7 - west;
				west = temp;
			}
		}
		cout << top << endl;
	}
}
