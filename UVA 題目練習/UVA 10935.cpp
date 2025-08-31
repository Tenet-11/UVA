// e155. 10935 - Throwing cards away I

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0)break;

		if (n == 1) {
			cout << "Discarded cards: \n";
			cout << "Remaining card: 1\n";
			continue;
		}
		// 排隊概念
		queue<int> q;
		for (int i = 1; i <= n; i++) {
			q.push(i);
		}
		cout << "Discarded cards: ";
		while (q.size() > 2)  {
			int x = q.front();
			cout << x << ", ";
			q.pop();
			int y = q.front();
			q.pop();
			q.push(y);
		}
		int x = q.front();
		cout << x << '\n';
		q.pop();
		cout << "Remaining card: ";
		int remain = q.front();
		cout << remain << '\n';
	}
}
