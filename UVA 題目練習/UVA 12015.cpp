// a130. 12015 - Google is Feeling Lucky

#include <iostream>
#include <vector>
using namespace std;


int main() {
	int t; cin >> t;
	int count = 0;
	while (t--) {
		vector<pair<string, int>> google;
		for (int i = 0; i < 10; i++) {
			string s;
			cin >> s;
			int n; cin >> n;
			google.push_back({ s, n });
		}
		
		vector<pair<string, int>> res;
		int max = 1;
		for (int i = 0; i < 10; i++) {
			if (google[i].second > max) {
				max = google[i].second;
			}
		}
		for (int i = 0; i < 10; i++) {
			if (max == google[i].second) {
				res.push_back({ google[i].first,google[i].second });
			}
		}
		cout << "Case #" << ++count << ":" << endl;
		for (int i = 0; i < res.size(); i++) {
			cout << res[i].first << endl;
		}
	}
}
