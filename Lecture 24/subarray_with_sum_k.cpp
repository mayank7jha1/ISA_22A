//check if a subarray is there whose sum is k.
#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool is_subarray_sum_k(int* a, int n, int k) {
	unordered_set<int>s;

	int pre = 0;
	for (int i = 0; i < n; i++) {
		pre += a[i];
		if (pre == k or s.find(pre - k) != s.end()) {
			return true;
		}
		s.insert(pre);
	}
	return false;
}


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int key = 12;
	cout << is_subarray_sum_k(a, n, key) << endl;

}

