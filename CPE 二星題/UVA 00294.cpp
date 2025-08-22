// CPE 二星題
// d366. 00294 - Divisors

#include <iostream>
#include <vector>
using namespace std;

const int MAXP = 32000;

int prime[MAXP];
vector<int>primes;

// 建立質數表 (托拉妮絲質數篩法)
// 這做法 O(n log log n) 複雜度小
void sieve() {
	for (int i = 2; i < MAXP; i++) {
		if (!prime[i]) {
			primes.push_back(i);
			for (int j = i * i; j < MAXP; j += i) {
				prime[j] = 1;
			}
		}
	}
}
int factor(int n) {
	if (n == 1)return 1;
	int cnt = 1;
	int temp = n;

	for (int p : primes) {
		if (1LL * p * p > temp)  {
			break;
		}

		if (temp % p == 0) {
			int e = 0;
			while (temp % p == 0) {
				temp /= p;
				e++;
			}
			cnt *= (e + 1);
		}
	}
	if (temp > 1)cnt *= 2;
	return cnt;
}

int main() {
	ios::sync_with_stdio(false);  
	cin.tie(nullptr);    

	sieve();

	int t; cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		int max = 0;
		int cur = 0;
		long long note = 0;
		for (int i = a; i <= b; i++) {
			cur = factor(i);
			if (cur > max) {
				max = cur;
				note = i;
			}
		}
		cout << "Between " << a << " and " << b << ", " << note << " has a maximum of " << max << " divisors.\n";
	}
	
}






// 這是正確但速度很慢的做法
/*#include <iostream>
using namespace std;

int factor(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);  
	cin.tie(nullptr);    

	int t; cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		int max = 0;
		int cur = 0;
		long long note = 0;
		for (int i = a; i <= b; i++) {
			cur = factor(i);
			if (cur > max) {
				max = cur;
				note = i;
			}
		}
		cout << "Between " << a << " and " << b << ", " << note << " has a maximum of " << max << " divisors.\n";
	}
	
}
*/
