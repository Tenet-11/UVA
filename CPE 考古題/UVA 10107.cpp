// CPE 二星題
// CPE 考古題: 2024/10
// c010. 10107 - What is the Median?

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// 使用全域heap
priority_queue <int>maxHeap; // 大根堆
priority_queue<int, vector<int>, greater<int>>minHeap; // 小根堆


void median(int size) {
	if (size % 2 == 1) {
		cout << maxHeap.top() << '\n';
	}
	else {
		int ans = maxHeap.top() + minHeap.top();
		cout << ans / 2 << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int N;;
	int count = 0;

	while (cin >> N)  {
		// 插入數字
		if (maxHeap.empty() || N <= maxHeap.top()) {
			maxHeap.push(N);
		}
		else minHeap.push(N);

		if (maxHeap.size() > minHeap.size() + 1) {
			minHeap.push(maxHeap.top());
			maxHeap.pop();
		}
		else if (minHeap.size() > maxHeap.size()) {
			maxHeap.push(minHeap.top());
			minHeap.pop();
		}

		median(++count);
	}
}
