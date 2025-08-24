#include <iostream>
using namespace std;

int main() {
	char num[9];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	

	int s= 0;
	for (int i = 0; i < 8; i++) {
		s += (num[i] - '0') * (8 - i);
	}
	s += num[8] - '0';

	// c: 檢查碼
	int c = 10 - s % 10;
	if (c == 10)c = 0;

	// 根據c來推可能的縣市
    switch (c) {
    case 0:
        printf("BNZ");
        break;
    case 1:
        printf("AMW");
        break;
    case 2:
        printf("KLY");
        break;
    case 3:
        printf("JVX");
        break;
    case 4:
        printf("HU");
        break;
    case 5:
        printf("GT");
        break;
    case 6:
        printf("FS");
        break;
    case 7:
        printf("ER");
        break;
    case 8:
        printf("DOQ");
        break;
    case 9:
        printf("CIP");
        break;
    }
}
