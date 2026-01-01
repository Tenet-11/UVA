// CPE 二星題
// CPE 考古題: 2025/5
// c050. 00453 - Goldbach's Conjecture

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

const int maxN = 1000000;
bool is_prime[maxN + 1];
int N;
vector<int>primes;

// 質數表
void sieve() {
	fill(is_prime, is_prime + maxN + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; 1LL * i * i <= maxN; i++)  {
		if (is_prime[i] == true) {
			for (int j = i * i; j <= maxN; j += i)  {
				is_prime[j] = false;
			}
		}
	}

	for (int i = 3; i <= maxN; i++) {
		if (is_prime[i] == true) {
			primes.push_back(i);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	sieve();
	while (cin >> N) {
		if (N == 0)break;
		bool ok = false;
		int origin_N = N;
		int p = -1, q = -1;
		for (int i = 0; i < primes.size(); i++) {
			if (primes[i] > N) break;
			int dec = N - primes[i];
			if (is_prime[dec])  {
				p = primes[i];
				q = dec;
				ok = true;
				break;
			}
		}
		if (ok) {
			cout << origin_N << " = " << p << " + " << q << '\n';
		}
		else cout << "Goldbach's conjecture is wrong.\n";
	}
}
