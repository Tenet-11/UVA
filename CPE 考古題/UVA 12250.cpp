// CPE 一星題
// CPE 考古題: 2024/12
// a135. 12250 - Language Detection

#include <iostream>
using namespace std;

int main() {
	int count = 0;
	string s;
	while (cin >> s) {
		if (s == "#")break;

		if (s == "HELLO") {
			cout << "Case " << ++count << ": ENGLISH\n";
		}
		else if (s == "HOLA") {
			cout << "Case " << ++count << ": SPANISH\n";
		}
		else if (s == "HALLO") {
			cout << "Case " << ++count << ": GERMAN\n";
		}
		else if (s == "BONJOUR") {
			cout << "Case " << ++count << ": FRENCH\n";
		}
		else if (s == "CIAO") {
			cout << "Case " << ++count << ": ITALIAN\n";
		}
		else if (s == "ZDRAVSTVUJTE") {
			cout << "Case " << ++count << ": RUSSIAN\n";
		}
		else {
			cout << "Case " << ++count << ": UNKNOWN\n";
		}

	}
}
