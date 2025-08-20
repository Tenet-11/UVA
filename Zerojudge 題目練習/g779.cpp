#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	if (N % K == 0) {
		cout << "YES";
		return 0;
	}
	
	vector<int>dig;
	while (N > 0) {
		int x = N % 10;
		N /= 10;
		dig.push_back(x);
	}
	for (int i = 0; i < dig.size(); i++) {
		if (K == dig[i]) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
