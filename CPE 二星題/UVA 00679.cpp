// CPE 二星題
// a249. 00679 - Dropping Balls
// 二元樹 (binary trees)

#include <iostream>
using namespace std;

// 二元樹 (binary tree)
int main() {
	
	// 沒加這兩行提升I/O效率會吃到TLE
	ios::sync_with_stdio(false);  // 解除和stdio.h的同步，只看cin跟cout不用管scanf跟printf
    cin.tie(nullptr);             // 解開cin跟cout的綁定
	int t; cin >> t;
	while (t--) {
		int D, I;
		cin >> D >> I;

		// tips: 不用真的模擬前面I-1顆球，可以直接推公式
		I--;
		int pos = 1;
		for (int i = 1; i < D; i++) {
			if (I % 2) {
				pos = pos * 2 + 1;
			}
			else {
				pos = pos * 2;
			}
			I >>= 1;
		}
		cout << pos << '\n'; // 用endl的話代表立即印出。用'\n'的話會等到buffer滿了才會一次印出
	}
}
