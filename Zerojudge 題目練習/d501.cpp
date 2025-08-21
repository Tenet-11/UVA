#include <iostream>
#include <iomanip>
using namespace std;
// 如果至少一個是 double → 結果會做 浮點數除法（保留小數）
int main() {
	double n;
	cin >> n;

	double celcius = (double)5 / (double) 9 * (n - 32);
	cout << fixed << setprecision(3) << celcius;
}
