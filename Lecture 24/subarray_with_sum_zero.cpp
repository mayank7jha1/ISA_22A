
#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool is_subarray_sum_zero(int* a, int n) {
	//Shortcut:

	unordered_map<int, int>um;
	unordered_set<int>s;//It will only contain elements that are unique
	//oredered set to values will be in the sorted form.

	int pre = 0;
	for (int i = 0; i < n; i++) {
		pre += a[i];
		if (pre == 0 or um[pre] > 0) {
			return true;
		}
		um[pre]++;
	}
	return false;
}

bool is_subarray_sum_zero2(int* a, int n) {
	//Shortcut:
	unordered_set<int>s;//It will only contain elements that are unique
	//oredered set to values will be in the sorted form.
	int pre = 0;
	for (int i = 0; i < n; i++) {
		pre += a[i];
		if (pre == 0 or s.find(pre) != s.end()) {
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

	cout << is_subarray_sum_zero(a, n) << endl;;
	cout << is_subarray_sum_zero2(a, n) << endl;;
}

