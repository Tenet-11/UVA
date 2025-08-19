// CPE 二星題
// d219. 00374 - Big Mod

#include <iostream>
#include <string>
using namespace std;

// 計算 R = BP mod M 寫出一個有效率的演算法
// key: 如果直接用pow(a,b)的方式寫計算量過大
string binary(int n) {
    string res = "";
    if (n == 0) return "0"; 

    while (n > 0) {
        // 把 bit 插到字串前面
        //res = "1" + "01" = "101"
        res = char('0' + (n % 2)) + res; 

        n /= 2;
    }
    return res;
}

long long mod_pow(long long B, int P, long long M) {
    if (M == 1)return 0;
    long long base = ((B % M) + M) % M;
    long long result = 1 % M;

    string bits = binary(P);
    for (int i = int(bits.size() - 1); i >= 0; i--) {
        if (bits[i] == '1') {
            result = (result * base) % M;
        }
        base = (base * base) % M;
    }
    return result;
}

int main() {
	int B, P, M;

    while (cin >> B >> P >> M) {
        cout << mod_pow(B, P, M) << endl;
    }
    
}
