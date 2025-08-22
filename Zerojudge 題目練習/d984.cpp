#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    while (cin >> a >> b >> c) {
        // 找出誰是第三名
        if (a <= b && a <= c) {         // A 最少
            if (b <= c) b += a;         // 棄 A 保 B
            else c += a;                // 棄 A 保 C
            a = 0;
        } 
        else if (b <= a && b <= c) {    // B 最少
            if (a <= c) a += b;         // 棄 B 保 A
            else c += b;                // 棄 B 保 C
            b = 0;
        } 
        else {                          // C 最少
            if (a <= b) a += c;         // 棄 C 保 A
            else b += c;                // 棄 C 保 B
            c = 0;
        }

        // 判斷誰贏
        if (a > b && a > c) cout << "A\n";
        else if (b > a && b > c) cout << "B\n";
        else cout << "C\n";
    }
}
