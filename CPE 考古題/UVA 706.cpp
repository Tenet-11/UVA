// CPE 二星題
// CPE 考古題: 2025/12
// c135. 00706 - LC-Display

#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
Segments index:
0: top
1: top-right
2: bottom-right
3: bottom
4: bottom-left
5: top-left
6: middle
*/

int seg[10][7] = {
    {1,1,1,1,1,1,0}, // 0
    {0,1,1,0,0,0,0}, // 1
    {1,1,0,1,1,0,1}, // 2
    {1,1,1,1,0,0,1}, // 3
    {0,1,1,0,0,1,1}, // 4
    {1,0,1,1,0,1,1}, // 5
    {1,0,1,1,1,1,1}, // 6
    {1,1,1,0,0,0,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}  // 9
};

int main() {
    int s;
    string n;

    while (cin >> s >> n) {
        if (s == 0 && n == "0") break;

        int H = 2 * s + 3;

        for (int row = 0; row < H; row++) {
            for (int i = 0; i < n.size(); i++) {
                int d = n[i] - '0';

                if (row == 0) {
                    // top
                    cout << " ";
                    if (seg[d][0]) cout << string(s, '-');
                    else cout << string(s, ' ');
                    cout << " ";
                }
                else if (row > 0 && row < s + 1) {
                    // upper vertical
                    if (seg[d][5]) cout << "|";
                    else cout << " ";
                    cout << string(s, ' ');
                    if (seg[d][1]) cout << "|";
                    else cout << " ";
                }
                else if (row == s + 1) {
                    // middle
                    cout << " ";
                    if (seg[d][6]) cout << string(s, '-');
                    else cout << string(s, ' ');
                    cout << " ";
                }
                else if (row > s + 1 && row < H - 1) {
                    // lower vertical
                    if (seg[d][4]) cout << "|";
                    else cout << " ";
                    cout << string(s, ' ');
                    if (seg[d][2]) cout << "|";
                    else cout << " ";
                }
                else if (row == H - 1) {
                    // bottom
                    cout << " ";
                    if (seg[d][3]) cout << string(s, '-');
                    else cout << string(s, ' ');
                    cout << " ";
                }

                if (i != n.size() - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
