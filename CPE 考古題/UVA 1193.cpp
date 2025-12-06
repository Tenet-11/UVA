// CPE 三星題
// CPE 考古題: 2023/10月
// m644. 1193 - Radar Installation

#include <iostream>
#include <vector>
#include <math.h>
#include<algorithm>
using namespace std;

int main() {
	int n, d;
	int test = 0;
	while (cin >> n >> d) {
		if (n == 0 && d == 0)break;

		int x[1000] = { 0 };
		vector<pair<double,double>> position;
		bool over = false;

		for (int i = 0; i < n; i++) {
			cin >> x[i];
			int yy; cin >> yy;
			if (yy < 0 || yy > d) {
				over = true;
			}

			// 我犯了一個錯，就算over，也要把剩下的資訊跑完
			if (over) continue;
			double left, right;
			left = x[i] - sqrt(d * d - yy * yy);
			right = x[i] + sqrt(d * d - yy * yy);
			position.push_back({ left, right });
		}

		if (over == true) {
			cout << "Case " << ++test << ": -1" << '\n';
			continue;
		}

		// 自訂comparator的寫法要會
		// 希望a排在b前面回傳true，否則回傳false;
		sort(position.begin(), position.end(),
			[](pair<double, double>& a, pair<double, double>& b) {
				return a.second < b.second;
			});

		int count = 0;
		double note = 0;
		for (int i = 0; i < n; i++) {
			
			if (i == 0) {
				count++;
				note = position[i].second;
				continue;
			}
			else {
				if (note >= position[i].first && note <= position[i].second) {
					continue;
				}
				else {
					count++;
					note = position[i].second;
				}
			}
		}

		cout << "Case " << ++test << ": " << count << '\n';
	}
}
