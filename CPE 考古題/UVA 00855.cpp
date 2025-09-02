// CPE 二星題
// CPE 考古題: 2020/6
// f438. 855 - Lunch in Grid City

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int S, A, P;
		cin >> S >> A >> P;

		vector<int>street;
		vector<int>avenue;
		for (int i = 0; i < P; i++) {
			int s, a;
			cin >> s >> a;
			street.push_back(s);
			avenue.push_back(a);
		}

		int idx = 0;
		if (street.size() & 1) {
			idx = street.size() / 2;
		}
		else {
			idx = street.size() / 2 - 1;
		}
		sort(street.begin(), street.end());
		sort(avenue.begin(), avenue.end());
		
		cout << "(Street: " << street[idx] << ", Avenue: " << avenue[idx] << ")\n";
	}
}
