#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long

int Solve(int i, int n, int* v, int k) {

	/*if (i >= n) {
		//toh ek eisa answer return karo jo kabhi answer nahi bann sakta
		return 1e9;
	}*/

	if (i == n - 1) {
		return 0;
	}

	int ans = INT_MAX;
	for (int j = 1; j <= k; j++) {
		if (i + j <= n - 1) {
			ans = min(ans,
			          Solve(i + j, n, v, k) + abs(v[i] - v[i + j]));

		}

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

	cout << Solve(0, n, a, k) << endl;;
}



/*1 2 3 4 5 6

5 par khade hoke tumne 2 step : 7th stone :

7th ka answer : very large number hain:

5:  1 step: 6
5: 2 7====100000007


(6,10000007)*/