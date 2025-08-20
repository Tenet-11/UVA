#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double n;
	while (cin >> n) {
		cout << "|" << n << "|" << "=";
		cout << fixed << setprecision(4) << fabs(n) << endl;
	}
}
