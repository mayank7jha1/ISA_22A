#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
int n, m;
int dp[1001][1001] = {0};

void Solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		dp[x][y]++;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			//Prefix Sum of Every Row:
			dp[i][j] += dp[i][j - 1];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			//Prefix sum for every column
			dp[i][j] += dp[i - 1][j];
		}
	}

	//You have Calculated prefix array which in this case is
	//Your dp array.


	int ans = INT_MIN;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			int x = dp[i][j];
			int y = dp[n][j] - dp[i][j];
			int z = dp[i][n] - dp[i][j];
			int p = dp[n][n] - x - y - z;

			ans = max(ans, min({x, y, z, p}));
		}
	}
	cout << ans << endl;
}



int32_t main() {
	Solve();
}