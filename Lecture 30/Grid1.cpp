#include<bits/stdc++.h>
using namespace std;
char grid[1001][1001];
#define mod 1000000007
#define int long long

int Grid1(int h, int w) {
	int dp[h + 1][w + 1] = {0};
	dp[h][w] = 1;//Main ulta travel kar raha hu.dp[1][1]=1;
	for (int i = h; i >= 1; i--) { //We are travelling from last to 1 box;
		for (int j = w; j >= 1; j--) {
			if (i == h and j == w) {
				continue;
			}
			if (grid[i][j] == '#') {
				dp[i][j] = 0;
			} else {
				if (i == h) {//This is last row

					dp[i][j] = (dp[i][j + 1] % mod);

				} else if (j == w) {//This is last column

					dp[i][j] = (dp[i + 1][j] % mod);

				} else {//Any random box;

					dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % mod;

				}
			}
		}
	}

	return dp[1][1];
}

//cLear?


// dp[i][j]==aakhri row:

int32_t main() {
	int h, w;
	cin >> h >> w;

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> grid[i][j];
		}
	}
	cout << Grid1(h, w) << endl;
}