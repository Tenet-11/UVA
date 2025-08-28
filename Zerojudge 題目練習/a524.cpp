#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        vector<int> a;
        for (int i = n; i >=1; i--) {
            a.push_back(i);
        }

        do {
            for (int x : a)cout << x;
            cout << '\n';
        } while (prev_permutation(a.begin(), a.end()));
    }
}

/*
要include <algorithm>
prev_permutation 的定義：把序列換成「字典序中的前一個排列」。
所以如果你要「一路列到最小排列」，就必須一開始給它 最大排列，這樣一路往前才會把所有排列枚舉完。
*/
