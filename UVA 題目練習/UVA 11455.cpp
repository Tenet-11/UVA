#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long a[4];
        for (int i = 0; i < 4; i++) cin >> a[i];
        sort(a, a + 4);

        // 能否形成四邊形：最大邊 < 其他三邊和
        if (a[3] >= a[0] + a[1] + a[2]) {
            cout << "banana\n";
            continue;
        }

        // square
        if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) {
            cout << "square\n";
        }
        // rectangle
        else if (a[0] == a[1] && a[2] == a[3]) {
            cout << "rectangle\n";
        }
        // quadrangle
        else {
            cout << "quadrangle\n";
        }
    }
    return 0;
}
