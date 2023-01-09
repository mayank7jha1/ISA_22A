#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
int n, l, h, r;
int a[2001];
int dp[2001][2001];

int Sleeping_Schedule(int i, int walking_hour) {

	if (i == n) {
		return 0;//Because i is 0 based and when you reach i==n that means
		//you must have already calculted the no of good sleeps.
	}

	if (dp[i][walking_hour] != -1) {
		return dp[i][walking_hour];
	}

	int x = (walking_hour + a[i]) % h;

	int y = (walking_hour + a[i] - 1) % h;

	int ans1 = 0, ans = 0;

	if (x >= l and x <= r) {
		ans = 1;
	}
	if (y >= l and y <= r) {
		ans1 = 1;
	}

	int option1 = Sleeping_Schedule(i + 1, x) + ans;

	int option2 = Sleeping_Schedule(i + 1, y) + ans1;

	dp[i][walking_hour] = max(option1, option2);
	return dp[i][walking_hour];
}


int32_t main() {
	cin >> n >> h >> l >> r;
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Sleeping_Schedule(0, 0) << endl;;
}