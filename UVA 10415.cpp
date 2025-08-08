// CPE 一星題
// e531. 10415 - Eb Alto Saxophone Player

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	map<char, vector<int>> mp;
    // index 是0是空
    mp['c'] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1 }; // c：2~4, 7~10 要按（index 1..10 看得到對應）
    mp['d'] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0 }; // d：2~4, 7~9
    mp['e'] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0 }; // e：2~4, 7~8
    mp['f'] = { 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0 }; // f：2~4, 7
    mp['g'] = { 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 }; // g：2~4
    mp['a'] = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 }; // a：2~3
    mp['b'] = { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 }; // b：2
    mp['C'] = { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 }; // C：3
    mp['D'] = { 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0 }; // D：1~4, 7~9
    mp['E'] = { 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0 }; // E：1~4, 7~8
    mp['F'] = { 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0 }; // F：1~4, 7
    mp['G'] = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 }; // G：1~4
    mp['A'] = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 }; // A：1~3
    mp['B'] = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }; // B：1~2


    int t;
    string s;
	cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);

        int cnt[11] = { 0 }; //按下的次數
        int last[11] = { 0 };

        for (int i = 0; i < s.size(); i++) {
            for (int j = 1; j <= 10; j++) {
                if (mp[s[i]][j] == 1) {
                    if (last[j] == 1)continue;
                    else {
                        last[j] = 1;
                        cnt[j]++;
                    }
                }
                else {
                    last[j] = 0;
                }
            }
        }

        for (int i = 1; i <= 10; i++) {
            cout << cnt[i] << " ";
        }
        cout << endl;
    }
}
