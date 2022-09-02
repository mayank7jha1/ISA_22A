#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int Solve(int a[], int n) {
	int ans = 0;
	long long int left = -10000;
	long long int right = 10000;
	int size = right - left + 1;

	int freq[size] = {0};
	for (int i = 0; i < n; i++) {
		freq[a[i] - left]++;
	}

	int Residue = 0;

	for (int i = left; i <= right; i++) {
		if (freq[i - left] > 0) {
			ans = (ans + ((freq[i - left] + 1 - Residue) / 2) * i);
			Residue = (freq[i - left] - Residue) % 2;
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

	cout << Solve(a, n);
}


