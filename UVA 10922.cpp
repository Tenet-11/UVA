// CPE 一星題
// d672. 10922 - 2 the 9s

#include <iostream>
#include <string>
using namespace std;

int function(string N) {
	int sum = 0;
	for (int i = 0; i < N.size(); i++) {
		sum += N[i] - '0';
	}
	return sum;
}

int main() {
	string N;
	while (cin >> N) {
		if (N == "0")break;
		int degree = 0;
		bool check = false;
		int sum = function(N);
		degree++;

		while (sum >= 10) {
			sum = function(to_string(sum));
			degree++;
		}
		if (sum%9==0) {
			cout << N << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
		}
		else cout << N << " is not a multiple of 9." << endl;
	}
}
