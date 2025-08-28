#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    // 樹冠（n 行）：第 i 行有 i 個星號，星號間以空白分隔；左側補 n - i 個空白以置中
    for (int i = 1; i <= n; ++i) {
        cout << string(n - i, ' ');          // 左側空白
        for (int j = 1; j <= i; ++j) {
            if (j > 1) cout << ' ';          // 星號之間的空白
            cout << '*';
        }
        cout << '\n';
    }

    // 樹幹（n/2 行）：固定印 "| |"，置中於總寬度 (2n-1)，左側空白為 n - 2
    int trunk_rows = n / 2;                  // 無條件捨去
    int left_pad = n - 2;                  // 使 "| |" 置中
    for (int r = 0; r < trunk_rows; ++r) {
        cout << string(left_pad, ' ') << "| |" << '\n';
    }

    // 盆栽：寬度與樹冠底相同 (2n-1)；內容為 '\' + (2n-3 個 '_') + '/'
    cout << '\\' << string(2 * n - 3, '_') << '/' << '\n';

    return 0;
}
