// CPE 二星題
// CPE 考古題: 2023/10
// c048. 10161 - Ant on a Chessboard

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long int N; 
	while (cin >> N) {
		if (N == 0)break;

		int x = 0, y = 0;
		int note = 0;
		for (int i = 1; i <= 1000000; i++) {
			if (N <= pow(i, 2)) {
				note = i;
				break;
			}
		}

		long long int square = pow(note, 2);
		long long int square_minus_1 = pow(note - 1, 2);
		long long int sum = square + square_minus_1;
		long long int mid = 0;
		if (sum % 2 == 1) {
			mid = sum / 2 + 1;
		}
		else mid = sum / 2;

		// 奇數
		if (note % 2 == 1) {
			if (N > mid) {
				x = note - (N - mid);
				y = note;
			}
			else if (N == mid) {
				x = note, y = note;
			}
			else {
				x = note;
				y = note - (mid - N);
			}
		}
		else {
			if (N > mid) {
				x = note;
				y = note - (N - mid);
			}
			else if (N == mid) {
				x = note, y = note;
			}
			else {
				x = note - (mid - N);
				y = note;
			}
		}
		cout << x << " " << y << '\n';
	}
}
