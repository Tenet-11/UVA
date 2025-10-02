// CPE 一星題
// CPE 考古題: 2022/10
// d041. 11219 - How old are you?

#include <iostream>
#include <string>
using namespace std;

struct Date {
	int d, m, y;
};

Date split(string s) {
	Date temp;
	temp.d = stoi(s.substr(0, 2));
	temp.m = stoi(s.substr(3, 2));
	temp.y = stoi(s.substr(6, 4));

	return temp;
}

int main() {
	int T; cin >> T;
	int count = 0;
	cin.ignore();
	while (T--) {
		cin.ignore();
		string todayStr, birthStr;
		getline(cin, todayStr);
		getline(cin, birthStr);

		Date today = split(todayStr);
		Date birth = split(birthStr);

		int age = today.y - birth.y;
		if (today.m < birth.m || (today.m == birth.m && today.d < birth.d)) {
			age--;
		}

		if (age < 0) {
			cout << "Case #" << ++count << ": Invalid birth date\n";
		}
		else if (age > 130) {
			cout << "Case #" << ++count << ": Check birth date\n";
		}
		else {
			cout << "Case #" << ++count << ": " << age << '\n';
		}
	}
}
