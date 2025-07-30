// CPE 一星題
// e606. 10057 - A mid-summer nights dream


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ZeroJudge 的翻譯就是一坨
// 第一個數字是最小的中位數
// 第二個數字是輸入的數字有多少個可以達到最小值 (限定輸入)
// 第三個數字是中位數可能有幾個 (不限定輸入)
int main() {
	int n;
	while (cin >> n) {
		int count = 0;
		int repeat = 0;
		vector<int> number;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			number.push_back(x);
			count++;
		}
		sort(number.begin(), number.end());


		if (count % 2 == 1) {
			for (int j = 0; j < n; j++) {
				if (number[j] == number[count / 2]) {
					repeat++;
				}
			}
			cout << number[count / 2] << " " << repeat << " " << 1 << endl;
		}
		else {
			for (int j = 0; j < n; j++) {
				if (number[j] == number[count / 2] || number[j] == number[count / 2 - 1]) {
					repeat++;
				}
			}
			int t = number[count / 2] - number[count / 2 - 1];
			cout << number[count / 2 - 1] << " " << repeat << " " << t + 1 << endl;
		}

	}
}
