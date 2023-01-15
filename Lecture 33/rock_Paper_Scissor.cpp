#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long
int r, p, s;
double dp[101][101][101];


double RockWins(int r, int s, int p) {

	if (s == 0 or r == 0) {
		return 0.0;
	}

	if (p == 0) {
		return 1.0;
	}

	if (dp[r][s][p] > -1.0) {
		return dp[r][s][p];
	}
	double ans = 0;
	double total = ((r * p) + (r * s) + (p * s));

	//Rock vs Paper
	ans += ((r * p) / total) * RockWins(r - 1, s, p);
	//Rock vs Scissor
	ans += ((r * s) / total) * RockWins(r, s - 1, p);
	//Paper vs Scissor
	ans += ((p * s) / total) * RockWins(r, s, p - 1);

	return dp[r][s][p] = ans;
}

double ScissorWins(int r, int s, int p) {

	if (p == 0 or s == 0) {
		return 0.0;
	}

	if (r == 0) {
		return 1.0;
	}

	if (dp[r][s][p] > -1.0) {
		return dp[r][s][p];
	}

	double ans = 0;
	double total = ((r * p) + (r * s) + (p * s));

	//Rock vs Paper
	ans += ((r * p) / total) * ScissorWins(r - 1, s, p);
	//Rock vs Scissor
	ans += ((r * s) / total) * ScissorWins(r, s - 1, p);
	//Paper vs Scissor
	ans += ((p * s) / total) * ScissorWins(r, s, p - 1);

	return dp[r][s][p] = ans;
}

double PaperWins(int r, int s, int p) {

	if (p == 0 or r == 0) {
		return 0.0;
	}

	if (s == 0) {
		return 1.0;
	}

	if (dp[r][s][p] > - 1.0) {
		return dp[r][s][p];
	}

	double ans = 0;
	double total = ((r * p) + (r * s) + (p * s));

	//Rock vs Paper
	ans += ((r * p) / total) * PaperWins(r - 1, s, p);
	//Rock vs Scissor
	ans += ((r * s) / total) * PaperWins(r, s - 1, p);
	//Paper vs Scissor
	ans += ((p * s) / total) * PaperWins(r, s, p - 1);

	return dp[r][s][p] = ans;
}


// int32_t main() {
int t;
cin >> t;
while (t--) {
	cin >> r >> s >> p;
	//cout << r << s << p << endl;
	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) << RockWins(r, s, p) << " ";
	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) << ScissorWins(r, s, p) << " ";
	memset(dp, -1, sizeof(dp));
	cout << fixed << setprecision(9) << PaperWins(r, s, p) << " ";
	cout << endl;
}
}