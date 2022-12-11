#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 9;

	priority_queue<int>pq;
	priority_queue<int, vector<int>, greater<int>>pq1;

	//C++ me Tags:

	for (int i = 0; i < n; i++) {//Element ko push karne ka
		//vo logn me hoga and n elements ke liye.
		pq.push(a[i]);
		pq1.push(a[i]);
	}


	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	while (!pq1.empty()) {
		cout << pq1.top() << " ";
		pq1.pop();
	}

	//Sortinggg: O(nlogn)
	//TIme complexity: O(nlogn)
}