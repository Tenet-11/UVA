// CPE 一星題
// e566. 10190 - Divide, But Not Quite Conquer!

#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int n, m;
	while (cin >> n >> m) {
		vector<long long int> container;
		bool check = true;

		// 小陷阱: m可以是0或1
		if (m == 0) {
			cout << "Boring!\n";
			continue;
		}
		if (m == 1) {
			cout << "1\n";
			continue;
		}

		while (n > 1) {
			if (n % m != 0) {
				check = false;
				break;
			}
			container.push_back(n);
			n = n / m;
		}

		if (check == true) {
			container.push_back(1);
			for (int i = 0; i < container.size(); i++) {
				if (i == container.size() - 1) {
					cout << container[i];
				}
				else {
					cout << container[i] << " ";
				}
			}
			cout << endl;
		}
		else {
			cout << "Boring!\n";
		}
	}
}
