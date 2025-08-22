#include <iostream>
using namespace std;

int main() {
    int a, an, d;
    cin >> a >> an >> d;

    if (d == 0) {
        if (a == an) cout << a;
        else cout << "不合法";
        return 0;
    }

    bool first = true;
    if (d > 0) {
        for (int i = a; i <= an; i += d) {
            if (first) { cout << i; first = false; }
            else cout << " " << i;
        }
    }
    else {
        for (int i = a; i >= an; i += d) {
            if (first) { cout << i; first = false; }
            else cout << " " << i;
        }
    }
}

