#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int Solve(int a[], int n, int key) {
	int s = 0;
	int e = n - 1;
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] == key) {
			ans = mid;
			return ans;
		} else if (a[mid] < key) {
			s = mid + 1;
		} else {
			e = mid - 1;
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
	int key;
	cin >> key;

	cout << Solve(a, n, key);
}