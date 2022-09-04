#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int minimum_in_rotated_array(int a[], int n) {
	int s = 0;
	int e = n - 1;
	int ans = -1;//90:

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] <= a[n - 1]) {
			//can be your answer:
			ans = a[mid];
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << minimum_in_rotated_array(a, n);
}