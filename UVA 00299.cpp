// CPE 一星題
// 00299 - Train Swapping

#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	for (int k = 0; k < test; k++) {
		int N;
		int num[50];
		int count = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> num[i];
		}
		for (int i = 0; i < N; i++) {
			for (int j = i; j < N; j++) {
				if (num[i] > num[j]) {
					int temp = num[j];
					num[j] = num[i];
					num[i] = temp;
					count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps.\n";
	}
}
