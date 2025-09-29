// CPE 二星題
// CPE 考古題: 2022/5
// e785. 12592 - Slogan Learning of Princess

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	map<string, string>mp;
	int N; cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		string key;
		getline(cin, key);
		string val;
		getline(cin,val);
		mp[key] = val;
	}

	int M; cin >> M;
	cin.ignore();
	for (int i = 0; i < M; i++) {
		string q;
		getline(cin, q);
		auto it = mp.find(q);
		cout << it->second << '\n';
	}
}
