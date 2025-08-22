// CPE 二星題
// a540. 10684 - The jackpot

#include <iostream>
#include <vector>
using namespace std;

// 簡單的最大子數列問題
int main() {
	int N; 
	while (cin >> N) {
		if (N == 0)break;
		vector<int> price;

		for (int i = 0; i < N; i++) {
			int x; cin >> x;
			price.push_back(x);
		}

		int cur = 0, max = 0;
		for (int x : price) {
			cur += x;
			if (cur < 0)cur = 0; // 一旦變負就重來
			if (cur > max)max = cur;
		}

		if (max <= 0) {
			cout << "Losing streak." << endl;
		}
		else {
			cout << "The maximum winning streak is " << max << "." << endl;
		}
	}
	
}
