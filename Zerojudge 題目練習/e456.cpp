#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	vector<string> song;
	while (cin >> s) {
		song.push_back(s);
	}

	for (int i = 0; i < song.size(); i++) {
		if (i == song.size() - 1) {
			cout << " " << song[i] << " little Indians";
			break;
		}
		if (i == 0) {
			cout << song[i] << " little,";
		}
		else {
			cout<<" "<<song[i]<< " little,";
		}
	}
}
