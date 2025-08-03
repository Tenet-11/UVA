// CPE 一星題
// e512. 10242 - Fourth Point!!

#include <iostream>
#include <iomanip>
using namespace std;

// 考點: 向量加減法 
// A == C：代表 A 是重複點，兩條邊是 A-B 和 A-D
// ➤ 那剩下那個點（要找的）是 B + ( D - A )
int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cout << fixed << setprecision(3);
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {

		// 找出重複點的座標
		double x, y;

		if (x1 == x3 && y1 == y3) {
			// AC
			x = x4 + x2 - x1;
			y = y4 + y2 - y1;
		}
		else if (x1 == x4 && y1 == y4) {
			// AD
			x = x3 + x2 - x1;
			y = y3 + y2- y1;
		}
		else if (x2 == x3 && y2 == y3) {
			// BC
			x = x4 + x1 - x2;
			y = y4 + y1 - y2;
		}
		else {
			// BD
			x = x3 + x1 - x2;
			y = y3 + y1 - y2;
		}

		cout << x << " " << y << endl;
	}
}
