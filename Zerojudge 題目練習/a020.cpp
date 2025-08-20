#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	char c; c = s[0];
	

	//這些我偷懶叫 gpt 算
	int alpha = 0;
	if (c == 'A') alpha = 1;   // 10 → 1 + 0*9 = 1
	else if (c == 'B') alpha = 10;  // 11 → 1 + 1*9 = 10
	else if (c == 'C') alpha = 19;  // 12 → 1 + 2*9 = 19
	else if (c == 'D') alpha = 28;  // 13 → 1 + 3*9 = 28
	else if (c == 'E') alpha = 37;  // 14 → 1 + 4*9 = 37
	else if (c == 'F') alpha = 46;  // 15 → 1 + 5*9 = 46
	else if (c == 'G') alpha = 55;  // 16 → 1 + 6*9 = 55
	else if (c == 'H') alpha = 64;  // 17 → 1 + 7*9 = 64
	else if (c == 'I') alpha = 39;  // 34 → 3 + 4*9 = 39
	else if (c == 'J') alpha = 73;  // 18 → 1 + 8*9 = 73
	else if (c == 'K') alpha = 82;  // 19 → 1 + 9*9 = 82
	else if (c == 'L') alpha = 2;   // 20 → 2 + 0*9 = 2
	else if (c == 'M') alpha = 11;  // 21 → 2 + 1*9 = 11
	else if (c == 'N') alpha = 20;  // 22 → 2 + 2*9 = 20
	else if (c == 'O') alpha = 48;  // 35 → 3 + 5*9 = 48
	else if (c == 'P') alpha = 29;  // 23 → 2 + 3*9 = 29
	else if (c == 'Q') alpha = 38;  // 24 → 2 + 4*9 = 38
	else if (c == 'R') alpha = 47;  // 25 → 2 + 5*9 = 47
	else if (c == 'S') alpha = 56;  // 26 → 2 + 6*9 = 56
	else if (c == 'T') alpha = 65;  // 27 → 2 + 7*9 = 65
	else if (c == 'U') alpha = 74;  // 28 → 2 + 8*9 = 74
	else if (c == 'V') alpha = 83;  // 29 → 2 + 9*9 = 83
	else if (c == 'W') alpha = 21;  // 32 → 3 + 2*9 = 21
	else if (c == 'X') alpha = 3;  // 30 → 3 + 0*9 = 3
	else if (c == 'Y') alpha = 12;  // 31 → 3 + 1*9 = 12
	else if (c == 'Z') alpha = 30;  // 33 → 3 + 3*9 = 30


	int idx = 8; int num = 0;
	for (int i = 1; i < 9; i++) {
		num += (s[i] - '0') * idx;
		idx--;
	}

	int ans = num + alpha + (s[9] - '0');

	if (ans % 10 == 0)cout << "real";
	else cout << "fake";

}
