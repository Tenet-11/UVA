// 考dfs的應用
// 印左括號跟右括號

#include <iostream>
#include <string>
using namespace std;

void dfs(int n, int t, int l, string& s) {
	// t: 總括號數量    l: 左括號數量
	if (t == 2 * n) {
		cout << s << '\n';
		return;
	}

	int r = t - l;
	if (l < n) { //還能放左括號
		s.push_back('(');
		dfs(n, t + 1, l + 1, s);
		s.pop_back();
	}
	if (r < l)  { //只能放右括號
		s.push_back(')');
		dfs(n, t + 1, l, s);
		s.pop_back();
	}
}

int main() {
	int N;
	bool first = false;
	while (cin >> N) {
		string s = "";
		if (!first) {
			dfs(N, 0, 0, s);
			first = true;
		}
		else {
			dfs(N, 0, 0, s);
		}
		cout << '\n' << '\n';
	}
}

// 原來字串也能用push_back
