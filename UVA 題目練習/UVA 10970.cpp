// 難度: CPE 一星
// d053. 10970 - Big Chocolate

#include <iostream>
using namespace std;

int main() {
	// 把未知大小的巧克力切成單位化，問最少要幾刀
	int m, n;
	while (cin >> m >> n) {
		cout << m * n - 1 << endl;
	}
}
// 抄別人思路
/*
每一刀都會一個大塊分成兩個小塊

這些小塊如果不是一小塊(1*1單位的巧克力) 也是當成一個大塊繼續切成兩小塊

所以就是答案就是所有塊數-1
*/
