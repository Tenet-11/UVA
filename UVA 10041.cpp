// CPE 一星題
// a737. 10041 - Vito's family

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	// key: 找中位數(到各點距離總和最短的數)
	//
	//

	int test;
	cin >> test;
	for (int j = 0; j < test; j++) {
		int r;
		int max, min;
		int count = 0;

		cin >> r;
		vector <int> number;
		for (int i = 0; i < r; i++) {
			int x;
			cin >> x;
			number.push_back(x);
			count++;
		}
		// 預設就是由小到大
		sort(number.begin(), number.end());


		int total = 0;
		if (count % 2 == 1) {
			int median = count / 2;
			for (int k = 0; k < r; k++) {
				int sum = number[k] - number[median];
				total += abs(sum);
			}

		}
		else {
			int median = count / 2;
			for (int k = 0; k < r; k++) {
				int sum = number[k] - number[median];
				total += abs(sum); //include 演算法
			}
		}

		cout << total << endl;
	}
}
