// 難度: CPE 一星
// c085. 00350 - Pseudo-Random Numbers

#include <iostream>
#include <set>
using namespace std;

int main() {
	int z, i, m, l;
	int test = 0;
	while (cin >> z >> i >> m >> l) {
		if (!z && !i && !m && !l) {
			break;
		}
		set<int> seen;
		seen.insert(l);

		int note;
		while (1) {
			int a = (z * l + i) % m;
			if (seen.count(a)) {
				note = a;
				break;
			}
			else {
				seen.insert(a);
			}
			l = a;
		}

		int count = 0;
		int cur = note;
		do {
			cur = (z * cur + i) % m;
			count++;
		} while (cur != note);
		cout << "Case " << ++test << ": " << count << '\n';
	}
}
// tips: 檢測vector有無重複元素
// sol: 發現用set查找比較好 (記得set用insert)


// 這樣有點麻煩不過是對的。邏輯是跑第一遍先檢查出重複的數字
// 第二次再用重複的數字當頭尾去跑cycle-length
// 偏麻煩，可以更簡化
