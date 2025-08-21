#include <bits/stdc++.h>
using namespace std;

static constexpr int POW2[] = {
	1,2,4,8,16,32,64,128,256,512,
	1024,2048,4096,8192,16384,32768,
	65536,131072,262144,524288,1048576,2097152,
	4194304,8388608,16777216,33554432,67108864,
	134217728,268435456,536870912,1073741824
};

inline bool isPow2_by_table(int a) {
	// 若需排除 0 或負數，可在此先判斷
	if (a <= 0) return false;
	return binary_search(begin(POW2), end(POW2), a);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a;
	while (cin >> a) {
		cout << (isPow2_by_table(a) ? "Yes\n" : "No\n");
	}
	return 0;
}


//這位元寫法我很喜歡，但會TLE
/*
bool isPow2(int a) {
	int count = 0;
	while (a && count < 2) {
		count += (a & 1);  // a & 1的意思是保留LSB
		a >>= 1;
	}
	return count == 1;
}*/


// 演算法速度沒問題，但問題出在輸入輸出太慢
/*
#include <iostream>
#include <algorithm>
using namespace std;

bool table(int a) {
	const int table[] = {
		1,2,4,8,16,32,64,128,256,512,1024,2048,
		4096,8192,16384,32768,65536,131072,262144,
		524288,1048576,2097152,4194304,8388608,
		16777216,33554432,67108864,134217728,
		268435456,536870912,1073741824
	};

	return binary_search(begin(table), end(table), a);
}


int main() {
	int a;
	while (cin >> a) {
		bool check = table(a);

		if (check) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
}*/
