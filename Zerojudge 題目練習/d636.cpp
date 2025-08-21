#include <iostream>
#include <cmath>
using namespace std;

const int mod = 10007;
int mod_pow(int a, long long b) {
	a %= mod;
	if (a < 0)a += mod;
	long long res = 1;
	int base = a;

	while (b > 0) {
		if (b & 1) {  //判斷b是否為奇數 (只會留下二進位的最低bits)
			res = (res * base) % mod; // 模運算的分配律
		}
		base = (base * base) % mod;
		b >>= 1;  // 右移運算(把二進位往右移一格)
	}
	return (int)res;
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << mod_pow(a, b);
}
