// CPE 一星題
// d492. 10226 - Hardwood species


#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool compare(const pair<string,int> &a, const pair<string,int> &b) {
	return a.first < b.first;
}

int main() {
	int test;
	cin >> test;
	string line;
	getline(cin, line); //讀掉換行字元 (用cin的話\n還留在輸入緩衝區裡)
	getline(cin, line); // 讀掉空白行
	for (int i = 0; i < test; i++) {
		string s;
		int total = 0;
		map<string, int>TreeCount;
		while (getline(cin,s)) {
			if (s.empty())break;
			TreeCount[s]++;
			total++;
		}

		vector<pair<string, int>> trees(TreeCount.begin(), TreeCount.end());
		sort(trees.begin(), trees.end(), compare);

		for (auto it : trees) {
			cout << fixed << setprecision(4);
			cout << it.first << " " << (100.0 * it.second / total) << endl;
			
		}
		if (i != test - 1) {
			cout << endl;
		}
	}
}
