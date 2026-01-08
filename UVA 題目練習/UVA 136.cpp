#include <iostream>
#include <vector>
using namespace std;

int main() {
	const int N = 1500;
	vector<long long int>ugly(N);

	ugly[0] = 1;

	int i2 = 0, i3 = 0, i5 = 0;
	for (int k = 1; k < N; k++) {
		long long n2 = ugly[i2] * 2;
		long long n3 = ugly[i3] * 3;
		long long n5 = ugly[i5] * 5;

		long long next = min(n2, min(n3, n5));
		ugly[k] = next;

		if (next == n2) i2++;
		if (next == n3) i3++;
		if (next == n5) i5++;
	}
	cout << "The 1500'th ugly number is " << ugly[1499] << ".";
}
