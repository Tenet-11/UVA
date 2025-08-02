// CPE 一星題
// a741. 10101 - Bangla Numbers

#include <iostream>
using namespace std;

void PrintBangla(long long num) {
    // 拆到不滿一個kuti
    if (num >= 10000000) {
        PrintBangla(num / 10000000);
        cout << " kuti";
        num %= 10000000;
    }
    if (num >= 100000) {
        cout << " " << num / 100000 << " lakh";
        num %= 100000;
    }
    if (num >= 1000) {
        cout << " " << num / 1000 << " hajar";
        num %= 1000;
    }
    if (num >= 100) {
        cout << " " << num / 100 << " shata";
        num %= 100;
    }
    if (num > 0) {
        cout << " " << num;
    }
}

int main() {
    long long num;
    int caseNum = 1;
    while (cin >> num) {
        cout << caseNum++ << ".";
        if (num == 0)
            cout << " 0"; // 測資之一，要空格
        else
            PrintBangla(num);
        cout << '\n';
    }
    return 0;
}
