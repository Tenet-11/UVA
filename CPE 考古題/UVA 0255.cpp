// CPE 二星題
// CPE 考古題: 2019/9月
// e601. 00255 - Correct Move

#include <iostream>
using namespace std;

int R(int p) { return p / 8; }
int C(int p) { return p % 8; }
bool SameRow(int a, int b) { return R(a) == R(b); }
bool SameCol(int a, int b) { return C(a) == C(b); }
bool inRange(int r, int c) {
	return 0 <= r && r < 8 && 0 <= c && c < 8;
}
bool between(int a, int b, int x) {
	if (a > b)swap(a, b);
	return a < x && x < b;
}


int main() {
	int k, q, next_q;
	while (cin >> k >> q >> next_q) {
		int kx = R(k), ky = C(k);
		int qx = R(q), qy = C(q);
		int nx = R(next_q), ny = C(next_q);

		if (k == q) {
			cout << "Illegal state\n";
			continue;
		}

		// 檢查非法移動
		// 1.沒有垂直或水平走，或者是根本沒走
		if (q == next_q || next_q == k || !(qx == nx || qy == ny)) {
			cout << "Illegal move\n";
			continue;
		}
		// 2.走法合理但跳躍穿過國王
		if (qy == ny && ky == ny && between(qx, nx, kx)) {
			cout << "Illegal move\n";
			continue;
		}
		if (qx == nx && kx == nx && between(qy, ny, ky)) {
			cout << "Illegal move\n";
			continue;
		}

		// 女王不能移動到國王可能的下一步上
		if ((abs(nx - kx) == 1 && ny == ky) || (abs(ny - ky) == 1 && nx == kx)) {
			cout << "Move not allowed\n";
			continue;
		}


		// Stop or Continue
		bool ok = false;
		int dr[4] = { 1,-1,0,0 };
		int dc[4] = { 0,0,1,-1 };
		for (int i = 0; i < 4; i++) {
			//國王的下一步
			int nr = kx + dr[i];
			int nc = ky + dc[i];

			if (!inRange(nr, nc))continue;
			if (nr == nx && nc == ny)continue; // 踩到女王
			if (nr == nx || nc == ny)continue; // 踩到女王可能的下一格
			ok = true;
			break;
		}
		if (ok) {
			cout << "Continue\n";
		}
		else cout << "Stop\n";
	}
}
