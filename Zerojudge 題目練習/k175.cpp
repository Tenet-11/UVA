#include <iostream>
#include <cmath>
#include <iomanip> // 輸出格式控制的函式庫
using namespace std;

// 計算用割圓法的誤差
int main() {
	int n;
	cin >> n;

	const double pi = acos(-1.0); //acos是反餘弦函數
	// acos(-1) 可以得到 π。(可以記)
	double Pn = n * sin(pi / n); //n邊形周長

	// abs是int的絕對值，fabs是double的絕對值
	double error = fabs(pi - Pn);

	cout << scientific << setprecision(2) << error;
}
