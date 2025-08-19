#include <iostream>
#include <string>
using namespace std;


const int Mod = 10007;

// exp=exponent的縮寫
int mod_pow(int base, long long exp) {
	long long result = 1 % Mod;
	long long b = base % Mod;

	while (exp > 0) {
		if (exp & 1LL) {
			result = (result * b) % Mod;
		}
		b = (b * b) % Mod;
		exp >>= 1;
	}
	return (int)result;
}

int main() {
	long long M;
	while (cin >> M) {
		cout << mod_pow(3, M) << '\n';
	}
}
