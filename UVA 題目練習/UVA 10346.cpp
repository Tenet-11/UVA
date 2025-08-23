// 難度: CPE 一星
// c079. 10346 - Peter's Smokes

#include <iostream>
using namespace std;

int main() {
	int n, k;
	while (cin >> n >> k) {
		int total = n;
		int nn = n; // nn是菸屁股

		while (nn / k != 0) {
			int trade = nn / k;
			total += trade;
			nn = (nn % k) + trade; // 餘數菸屁股 + 新抽完的菸屁股
		}
		cout << total << endl;
	}
}
