#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int Find_Peak_Element(int a[], int n) {
	int s = 0;
	int e = n - 1;
	int ans = -1;//90:

	while (s <= e) {
		int mid = (s + e) / 2;
		if (mid + 1 == n or a[mid] >= a[mid + 1]) {
			e = mid - 1;
			ans = mid;
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

	cout << Find_Peak_Element(a, n);
}