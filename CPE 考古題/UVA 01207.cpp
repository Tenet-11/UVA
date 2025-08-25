// CPE 二星 ~ 三星題
// CPE 考古題 : 2019/03/26
// f507. 1207 - AGTC

#include <iostream>
#include <vector>
using namespace std;

// 標準DP編輯距離問題 (似LCS)
int main() {
	int a, b;
	string s1, s2;
	while (cin >> a >> s1 >> b >> s2) {
		vector<vector<int>> dp(a + 1, vector<int>(b + 1, 0));
		for (int i = 0; i <= a; i++)dp[i][0] = i;
		for (int j = 0; j <= b; j++)dp[0][j] = j;

		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if (s1[i - 1] == s2[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1];
				}
				else {
					dp[i][j] = 1 + min(
						min(dp[i - 1][j],
							dp[i][j - 1]),
						dp[i - 1][j - 1]
					); //記得多個比較要{}
				}
			}
		}
		cout << dp[a][b] << '\n';
	}
}



// GPT 給的神仙作法 (壓縮到二維)
/*
#include <bits/stdc++.h>
using namespace std;

static inline int min3(int x, int y, int z) { return min(x, min(y, z)); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    string s1, s2;

    // 每筆資料兩行：a s1；b s2
    while ( (cin >> a >> s1) && (cin >> b >> s2) ) {
        // 確保長度一致（有些資料會給長度但你用不到）
        if ((int)s1.size() != a) a = (int)s1.size();
        if ((int)s2.size() != b) b = (int)s2.size();

        // 讓 s1 比較短，記憶體更小
        if (a > b) { swap(a, b); swap(s1, s2); }

        // 一維 DP：dp[j] = 當前列的值（上一列已被覆蓋）
        vector<uint16_t> dp(b + 1);

        // base: 把空字串變成 s2 前 j 個字元，需要 j 次插入
        for (int j = 0; j <= b; ++j) dp[j] = (uint16_t)j;

        for (int i = 1; i <= a; ++i) {
            uint16_t diag = dp[0];   // 左上角的舊值（上一列的 dp[j-1]）
            dp[0] = (uint16_t)i;     // 把 s1 前 i 個變成空字串，需要 i 次刪除

            for (int j = 1; j <= b; ++j) {
                uint16_t up   = dp[j];      // 上方（上一列的 dp[i-1][j]）還沒被覆蓋前的值
                uint16_t left = dp[j - 1];  // 左方（當前列 dp[i][j-1]）
                if (s1[i - 1] == s2[j - 1]) {
                    // 不用操作：沿用左上角
                    dp[j] = diag;
                } else {
                    // 刪除(上) / 插入(左) / 取代(左上) + 1
                    int del = up + 1;
                    int ins = left + 1;
                    int rep = diag + 1;
                    dp[j] = (uint16_t)min3(del, ins, rep);
                }
                diag = up;  // 迭代更新下一格的左上角
            }
        }

        cout << dp[b] << '\n';
    }
    return 0;
}
*/
