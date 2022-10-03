#include<bits/stdc++.h>
using namespace std;
#define int long long

int Solve(int n, int* v, int k) {
	if (n <= 0) {
		return 0;
	}

	int ans = INT_MAX;

	for (int j = 1; j <= k; j++) {
		if (n - j < 0) {
			break;
		}

		ans = min(ans, abs(v[n] - v[n - j]) + Solve(n - j, v, k));

	}
	return ans;
}


int32_t main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Solve(n - 1, a, k) << endl;;
}

