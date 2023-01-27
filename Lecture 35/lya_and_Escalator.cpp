#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
double dp[2001][2001] = {0};
int n, t;
double p;

double Solve() {

	//Escalator me expected value whenn there are
	//0 people and 0 sec.
	dp[0][0] = 1;

	for (int i = 1; i <= t; i++) {
		for (int j = 0; j <= n; j++) {
			if (j == n) {
				//You are the last person.
				dp[i][j] = p * dp[i - 1][j - 1] + dp[i - 1][j];
			} else if (j == 0) {
				// there are no person on escalator:

				dp[i][j] = (1 - p) * dp[i - 1][j];
			} else {
				dp[i][j] = p * dp[i - 1][j - 1] +
				           (1 - p) * dp[i - 1][j];
			}
		}
	}

	double ans = 0;

	for (int i = 0; i <= n; i++) {
		ans += i * dp[t][i];
	}
	return ans;
}



int32_t main() {
	cin >> n >> p >> t;
	cout << fixed << setprecision(8) << Solve() << endl;
}


// 1 0.5 4


// // ek bhi personn staircase par nahi hain:
// // 1 sec:

// 0.5 * 0.5 * 0.5 * 0.5:

// 0.5 * dp[i - 1][0];


