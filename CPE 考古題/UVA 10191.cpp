// CPE 一星題
// CPE 考古題: 2020/6
// f439. 10191 - Longest Nap

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

int time(string t) {
	int hour = ((t[0] - '0') * 10 + (t[1] - '0')) * 60;
	int min = (t[3] - '0') * 10 + (t[4] - '0');
	int total_time = hour + min;
	return total_time;
}

string string_time(int t) {
	string res = "";
	int hour = t / 60;
	int min = t % 60;

	ostringstream oss;
	oss << setw(2) << setfill('0') << hour << ":"
		<< setw(2) << setfill('0') << min;
	return oss.str();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int S;
	int count = 0;
	while (cin >> S) {
		int m1[100];
		int m2[100];

		string time_a, time_b;
		cin >> time_a >> time_b;
		string things;
		getline(cin, things);

		int ta = 0, tb = 0;
		ta = time(time_a);
		tb = time(time_b);

		m1[0] = ta, m2[0] = tb;
		string ans = "";
		int max_t = ta - 600;
		for (int i = 1; i < S; i++) {
			cin >> time_a >> time_b;
			getline(cin, things);

			ta = time(time_a);
			tb = time(time_b);
			m1[i] = ta, m2[i] = tb;
			if (m1[i] - m2[i - 1] > max_t) {
				max_t = m1[i] - m2[i - 1];
				ans = string_time(m2[i - 1]);
			}
		}

		if (1080 - m2[S - 1] > max_t) {
			max_t = 1080 - m2[S - 1];
			ans = string_time(m2[S - 1]);
		}

		int max_h = 0, max_min = 0;
		max_h = max_t / 60;
		max_min = max_t % 60;

		if (ans == "") {
			ans = "10:00";
		}
		if (max_h > 0) {
			cout << "Day #" << ++count << ": the longest nap starts at " <<
				ans << " and will last for " << max_h << " hours and " << max_min << " minutes.\n";
		}
		else {
			cout << "Day #" << ++count << ": the longest nap starts at " <<
				ans << " and will last for " << max_t << " minutes.\n";
		}
	}
}
