
// CPE 一星題
// c039. 00100 - The 3n + 1 problem

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b) {
		int min = -1, max = -1;
		if (a > b) {
			max = a, min = b;
		}
		else max = b, min = a;

		int index = -1;
		int max_count = 0;
		for (int i = min; i <= max; i++) {
			index = i;
			int count = 1;
			while (index != 1) {
				if (index % 2 == 1) {
					index = index * 3 + 1;
				}
				else index /= 2;
				count++;
			}
			if (count > max_count) max_count = count;
		}
		cout << a << " " << b << " " << max_count << endl;
	}
	
}
