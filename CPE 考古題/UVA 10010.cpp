// CPE 二星題
// CPE 考古題: 2019/12
// n736. 10010 - Where’s Waldorf?

#include <iostream>
#include <string>
#include <cctype>  //字母大小寫,判斷是否字母或數字
using namespace std;

char matrix[51][51] = { '0' };
bool check(string& s, int sr, int sc, int R, int C)  {
	int dr[8] = { -1,-1,-1,0,0,1,1,1 };
	int dc[8] = { -1,0,1,-1,1,-1,0,1 };

	// 判斷8個方向
	
	for (int d = 0; d < 8; d++) {
		int r = sr, c = sc; // 從起點開始
		bool ok = true;
		for (int k = 0; k < s.size(); k++) {
			if (r<1 || r>R || c<1 || c>C)  { // 超出
				ok = false;
				break;
			}
			if (matrix[r][c] != s[k]) {
				ok = false;
				break;
			}
			r += dr[d];
			c += dc[d];
		}
		if (ok)return true; //這方向成功(有一個成功就夠了)
	}
	return false;
	
}

int main() {
	int t;
	cin >> t;
	string line;
	getline(cin, line);

	while (t--) {
		int r, c;
		cin >> r >> c;
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				char cc; cin >> cc;
				matrix[i][j] = tolower(cc);
			}
		}
		int test; cin >> test;
		while (test--) {
			string s; cin >> s;
			for (char &it : s) {
				it = tolower(it);
			}
			char ch = s[0];
			bool find = false;
			for (int i = 1; i <= r; i++) {
				for (int j = 1; j <= c; j++) {
					if (matrix[i][j] == ch)  {
						bool ans = check(s, i, j, r, c);
						if (!ans)continue;
						else {
							find = true;
							cout << i << " " << j << '\n';
							break;
						}
					}
				}
				if (find)break;
			}
		}
	}
}
// 犯了一個超嚴重的錯誤，把int c跟char c取一樣的名字
