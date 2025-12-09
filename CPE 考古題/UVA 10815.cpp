// CPE 一星題
// CPE 考古題:2025/3
// r366. 10815 Andy’s First Dictionary

#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

set<string>cons;
void English_word(string& s){
	string temp = "";
	for (char c : s) {
		if (isalpha(c)) {
			temp += tolower(c);
		}
		else {
			if (!temp.empty()) {
				cons.insert(temp);
				temp.clear();
			}
		}
	}
	
	if (!temp.empty()) {
		cons.insert(temp);
	}
}

int main() {
	string s;
	while (getline(cin, s)) {   // ← 只用 EOF 結束
		English_word(s);
	}

	
	for (auto& v : cons) {
		cout << v << '\n';
	}
}
