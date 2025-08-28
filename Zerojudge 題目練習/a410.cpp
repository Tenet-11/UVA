#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    double det = a * e - b * d; // 行列式 Δ

    if (det != 0) {
        // 唯一解
        double x = (c * e - b * f) / det;
        double y = (a * f - c * d) / det;
        cout << fixed << setprecision(2);
        cout << "x=" << x << "\n";
        cout << "y=" << y << "\n";
    } else {
        // Δ == 0，可能無解或無限多解
        if (a * f == c * d && b * f == c * e) {
            cout << "Too many\n";  // 無限多解
        } else {
            cout << "No answer\n"; // 無解
        }
    }

    return 0;
}
