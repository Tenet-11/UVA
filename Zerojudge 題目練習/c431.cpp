
// 這題題目有限制記憶體不能超過5MB，所以vector等等都不能用

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int n, x;
	scanf("%d", &n);
	int num[101] = { 0 };

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		num[x]++;
	}

	int first = 1;
	for (int v = 1; v <= 100; v++) {
		while(num[v]--){
			if (!first)printf(" ");

			printf("%d", v);
			first = 0;
		}
	}
}
