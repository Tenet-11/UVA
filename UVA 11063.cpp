// CPE 一星題
// d123. 11063 - B2-Sequence

#include <iostream>
#include <vector>
#include <set>
using namespace std;

// 真的要把每個可能的值都run過一遍
int main() {
	int N;
	int count = 0;
	while (cin >> N) {
		vector<int> num;
		bool is_b2 = true;
		set<int> sums;
		for (int i = 0; i < N; i++) {
			int x;
			cin >> x;
			num.push_back(x);
		}

		// 檢查條件1
		for (int i = 1; i < N; i++) {
			if (num[i] < num[i - 1] || num[i] < 1) {
				is_b2 = false;
				break;
			}
		}
		if (num[0] < 1)is_b2 = false;

		// 檢查條件2
		if (is_b2) {
			for (int i = 0; i < N && is_b2; i++) {
				for (int j = i; j < N; j++) {
					int sum = num[i] + num[j];
					if (sums.count(sum)) { // 如果回傳1代表sum已經出現在sums的set中
						is_b2 = false;
						break;
					}
					sums.insert(sum);
				}
			}
		}

		count++;
		cout << "Case #" << count << ": ";
		if (is_b2) {
			cout << "It is a B2-Sequence." << endl;
		}
		else cout << "It is not a B2-Sequence." << endl;
	}
}

/*
* 幾個提醒的點
* 1. bi+bi的狀況要算進去
* 2. b1<=b2<=b3...<=bn
* 3. bi >= 1
* 4.用set容器的count去看有沒有重複的元素
*/
