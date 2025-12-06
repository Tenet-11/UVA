// CPE 一星題
// CPE 考古題: 2023/12
// c060. 00392 - Polynomial Showdown

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> num(9);
	while (cin>>num[8]) {
		int first = 0;
		bool check = false;
		if (num[8] != 0) {
			first = 8;
			check = true;
		}
		for (int i = 7; i >= 0; i--) {
			cin >> num[i];
			if (!check) {
				if (num[i] != 0) {
					first = i;
					check = true;
				}
			}
		}
		if (!check) {
			cout << 0 << '\n';
			continue;
		}

		for (int i = first; i >= 0; i--) {
			if (i == first) {
				if (num[i] != 0) {
					if (i == 0) {
						cout << num[i];
					}
					else if (i == 1) {
						if (num[i] == 1) {
							cout << "x";
						}
						else if (num[i] == -1) {
							cout << "-" << "x";
						}
						else {
							if (num[i] > 0) {
								cout << num[i] << "x";
							}
							else cout << "-" << abs(num[i]) << "x";
						}
					}
					else {
						if (num[i] == 1) {
							cout << "x^" << i;
						}
						else if (num[i] == -1) {
							cout << "-x^" << i;
						}
						else {
							cout << num[i] << "x^" << i;
						}
					}
				}
			}
			else {
				if (num[i] != 0) {
					if (i == 0) {
						if (num[i] > 0) {
							cout << " + " << num[i];
						}
						else cout << " - " << abs(num[i]);
					}
					else if (i == 1) {
						if (num[i] == 1) {
							cout << " + " << "x";
						}
						else if (num[i] == -1) {
							cout << " - " << "x";
						}
						else {
							if (num[i] > 0) {
								cout << " + " << num[i] << "x";
							}
							else cout << " - " << abs(num[i]) << "x";
						}
					}
					else {
						if (num[i] == 1) {
							cout << " + " << "x^" << i;
						}
						else if (num[i] == -1) {
							cout << " - " << "x^" << i;
						}
						else {
							if (num[i] > 0) {
								cout << " + " << num[i] << "x^" << i;
							}
							else cout << " - " << abs(num[i]) << "x^" << i;
						}
					}
				}
			}
		}
		cout << '\n';
	}
}
