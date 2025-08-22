// CPE 一星題
// c005. 10300 - Ecological Premium

#include <iostream>
using namespace std;

int main() {
	int n;  cin >> n;
	while (n--) {
		int f; cin >> f;
		long long result = 0;
		while (f--) {
			long long area, animal, eco;
			cin >> area >> animal >> eco;

			result += area * eco;
		}
		cout << result << endl;
	}
}
// 有個大重點，double沒辦法儲存大數，只能近似儲存
