// CPE 二星題
// CPE 考古題: 2022/10
// n702. 00815 - Flooded!

#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    int region = 0;

    while (cin >> m >> n) {
        if (m == 0 && n == 0) break;

        vector<int> con(m * n);
        for (int i = 0; i < m * n; i++) cin >> con[i];

        sort(con.begin(), con.end());

        int total_water;
        cin >> total_water;

        double water = total_water;      // 單位 m³
        double area = 100.0;             // 每格面積（10m × 10m）
        double height = 0;               // 最終水位

        bool done = false;
        int num_region = m * n;

        for (int i = 0; i < con.size() - 1; i++) {

            double diff = con[i + 1] - con[i];
            double need = diff * area * (i + 1);

            if (water >= need) {
                water -= need;   // 填滿這一層
            }
            else {
                // 水不夠到下一層 → 水位停在中間
                height = con[i] + water / (area * (i + 1));
                done = true;
                break;
            }
        }

        // 若整層都填完 → 此時水位超過最高地面
        if (!done) {
            height = con.back() + water / (area * con.size());
        }
        int flooded_region = 0;
        for (int h : con) {
            if (h < height) flooded_region++;
        }

        cout << "Region " << ++region << endl;
        cout << "Water level is "
            << fixed << setprecision(2) << height
            << " meters." << endl;
        cout << fixed << setprecision(2)
            << (double)flooded_region / num_region * 100
            << " percent of the region is under water." << endl;
    }
}
