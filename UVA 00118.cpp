// CPE 一星題
// c082. 00118 - Mutant Flatworld Expolrers

#include <iostream>
#include <string>
using namespace std;

int main() {
    int max_X, max_Y;
    cin >> max_X >> max_Y;

    int scent[100][100] = { 0 };  // 在這格曾經有人往外掉過，就標 1
    int x, y;
    char dir;
    while (cin >> x >> y >> dir) {
        cin >> ws;              // 安全吞掉換行/空白
        string s;
        getline(cin, s);

        bool over = false;

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == 'F') {
                // 下一步
                int nx = x, ny = y;
                if (dir == 'N') ny++;
                else if (dir == 'S') ny--;
                else if (dir == 'W') nx--;
                else  nx++;

                
                if (nx > max_X || ny > max_Y || nx < 0 || ny < 0) {
                    // 掉落
                    if (scent[x][y] == 1) {     
                        continue;
                    }
                    else {
                        scent[x][y] = 1;
                        over = true;
                        cout << x << " " << y << " " << dir << " LOST\n";
                        break;
                    }
                }
                else {
                    // 安全 → 真的前進
                    x = nx; y = ny;
                }
            }
            else if (s[i] == 'R') {
                if (dir == 'N') dir = 'E';
                else if (dir == 'E') dir = 'S';
                else if (dir == 'S') dir = 'W';
                else                 dir = 'N';
            }
            else { // 'L'
                if (dir == 'N') dir = 'W';
                else if (dir == 'W') dir = 'S';
                else if (dir == 'S') dir = 'E';
                else                 dir = 'N';
            }
        }

        if (!over) {
            cout << x << " " << y << " " << dir << endl;
        }
    }
}
