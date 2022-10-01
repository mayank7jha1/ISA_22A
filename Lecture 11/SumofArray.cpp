#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int sumofarray(int* a, int i, int n) {

	if (i == n - 1) {
		return a[i];
	}


	int ans = a[i] + sumofarray(a, i + 1, n);
	return ans;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << sumofarray(a, 0, n) << endl;
}