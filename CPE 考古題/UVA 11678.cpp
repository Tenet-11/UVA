// CPE 一星題
// CPE 考古題 2019/03/26
// e557. 11678 - Cards' Exchange

#include <iostream>
#include <set>
using namespace std;
int main() {
	int A, B;
	while (cin >> A >> B) {
		if (A == 0 && B == 0)break;

		set<int>a;
		set<int>b;
		set<int> mutual;

		for (int i = 0; i < A; i++) {
			int x; cin >> x;
			a.insert(x);
			mutual.insert(x);
		}
		for (int i = 0; i < B; i++) {
			int x; cin >> x;
			b.insert(x);
			mutual.insert(x);
		}

		cout << min(mutual.size() - a.size(), mutual.size() - b.size()) << '\n';
	}
}

// tips: 利用set
