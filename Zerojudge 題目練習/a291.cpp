#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        int t; cin >> t;
        while (t--) {
            int c1 = 0, c2 = 0;
            int aa, bb, cc, dd;
            cin >> aa >> bb >> cc >> dd;

            // 答案副本
            int ans[4] = {a, b, c, d};
            int guess[4] = {aa, bb, cc, dd};
            const int USED = -1000000007;

            // Step 1: 先算 A
            for (int i = 0; i < 4; i++) {
                if (ans[i] == guess[i]) {
                    c1++;
                    ans[i] = USED;
                    guess[i] = USED;
                }
            }

            // Step 2: 再算 B
            for (int i = 0; i < 4; i++) {
                if (guess[i] == USED) continue; // 已經算過 A
                for (int j = 0; j < 4; j++) {
                    if (ans[j] == USED) continue;
                    if (guess[i] == ans[j]) {
                        c2++;
                        ans[j] = USED; // 消耗這個數字
                        break;
                    }
                }
            }

            cout << c1 << 'A' << c2 << "B\n";
        }
    }
}
