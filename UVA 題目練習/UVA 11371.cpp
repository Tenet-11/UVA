// e590. 11371 - Number Theory for Newbies

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    while (cin >> n) {
        vector<int> digits;
        long long x = n;

        // 拆 digits
        while (x > 0) {
            digits.push_back(x % 10);
            x /= 10;
        }

        // 產生最大 (大到小)
        vector<int> maxd = digits;
        sort(maxd.begin(), maxd.end(), greater<int>());

        long long a = 0;
        for (int d : maxd) a = a * 10 + d;

        // 產生最小 (小到大)
        vector<int> mind = digits;
        sort(mind.begin(), mind.end());

        // 處理前導零：如果最小位是 0，找到第一個非 0 的交換
        if (mind[0] == 0) {
            for (int i = 1; i < mind.size(); i++) {
                if (mind[i] != 0) {
                    swap(mind[0], mind[i]);
                    break;
                }
            }
        }

        long long b = 0;
        for (int d : mind) b = b * 10 + d;

        long long diff = a - b;

        cout << a << " - " << b << " = " << diff 
             << " = 9 * " << diff / 9 << "\n";
    }
}
