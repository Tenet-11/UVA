// GPT小作弊
#include <iostream>
using namespace std;

// 學個牛逼演算法，Gregorian日曆
long long Gregorian(int y, int m, int d) {
	y -= (m <= 2);
	int era = y / 400;
	int yoe = y - era * 400;
	int mon_from_mar = (m > 2) ? (m - 3) : (m + 9);
	int doy = ((153 * mon_from_mar + 2) / 5) + d - 1;
	int doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;

	return era * 146097 + doe;
}

int main() {
	int y1, m1, d1, y2, m2, d2;
	while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2)  {
		int a = Gregorian(y1, m1, d1);
		int b = Gregorian(y2, m2, d2);
		cout << abs(b - a) << '\n';
	}
}
