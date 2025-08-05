// CPE 一星題
// f444. 10268 - 498-bis

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

// stringstream的用法要會
int main() {
	int x;
	while (cin >> x) {
		string line, enter;
		getline(cin, enter);

		getline(cin, line);
		stringstream ss(line);
		vector<int> coeffs;
		int a;
		while (ss >> a) {
			coeffs.push_back(a);
		}
		int n = coeffs.size();
		int result = 0;

		for (int i = 0; i < n - 1; i++) {
			int coef = coeffs[i];
			int power = n - 1 - i;
			result += coef * power * pow(x, power - 1);
		}
		cout << result << endl;
	}
	
}
