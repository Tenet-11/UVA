// CPE 一星題
// CPE 考古題: 2024/5
// j057. 11634 - Generate random numbers

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a0;
    while (cin >> a0) {
        if (a0 == 0) break;   // 輸入結束

        vector<bool> used(10000, false);
        int cnt = 0;
        int cur = a0;

        while (!used[cur]) {   // 直到遇到重複
            used[cur] = true;
            cnt++;

            long long sq = 1LL * cur * cur;   // 用 long long 避免溢位
            int next = (sq / 100) % 10000;    // 取中間 4 位

            cur = next;
        }

        cout << cnt << '\n';
    }

    return 0;
}
