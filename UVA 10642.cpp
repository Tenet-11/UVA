// CPE 一星題
// i859. 10642 - Can You Solve It?

#include <iostream>
using namespace std;
// 抱歉了，但這題用dp做根本不是一星題難度，無情公式解
// 然後測資會超大，開long long
long long int loc(long long int x, long long int y) {
	return (x + y) * (x + y + 1) / 2 + x;
}
int main() {
	int test;
	int count = 0;
	cin >> test;
	while (test--) {
		long long int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		count++;
		long long int result = loc(x2, y2) - loc(x1, y1);
		cout << "Case " << count << ": " << result << endl;
	}
}
