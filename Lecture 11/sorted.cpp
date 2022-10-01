#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


bool IsSorted(int* a, int i, int size) {
	if (i == size) {
		return true;
	}

	if (a[i] > a[i + 1]) {
		return false;
	}

	return IsSorted(a, i + 1, size);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << IsSorted(a, 0, n - 1) << endl;
}