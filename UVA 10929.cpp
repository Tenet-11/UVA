// CPE 一星題
// d235. 10929 - You can say 11

#include <iostream>
#include <string>
using namespace std;
 

// 不能簡單地用%11，因為位數太大要弄成字串
int main() {
    string N;

    while (cin >> N) {
        if (N == "0") break;

        int sum = 0;
        for (int i = 0; i < N.size(); i++) {
            // 字元轉數字的必會寫法
            int digit = N[i] - '0';
            if (i % 2 == 0)
                sum += digit;
            else
                sum -= digit;
        }

        if (sum % 11 == 0) {
            cout << N << " is a multiple of 11." << endl;
        }
        else {
            cout << N << " is not a multiple of 11." << endl;
        }
    }
}
