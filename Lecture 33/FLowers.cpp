#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int k;
#define int long long
#define mod 1000000007
int dp[100005];
int pre[100005];
//DP ki state kya hain?
//DP: Total no of ways to eat flower of a particular length.

int Flowers(int len, int k) {
	if (len == 0) {
		return 1;//Ye ek way hain flower khane ka.
	}
	if (dp[len] != -1) {
		return dp[len];
	}
	int op2 = 0;
	int op1 = Flowers(len - 1, k);
	if (len >= k) {
		op2 = Flowers(len - k, k);
	}
	return dp[len] = (op1 + op2) % mod;
}


void precompute() {
	memset(dp, -1, sizeof(dp));
	pre[0] = 0;
	for (int i = 1; i <= 100005; i++) {
		pre[i] = pre[i - 1] + Flowers(i, k);
		pre[i] %= mod;
	}
}

int32_t main() {
	int t;
	cin >> t >> k;
	precompute();
	while (t--) {
		int a, b;
		cin >> a >> b;
		//memset(dp, - 1, sizeof(dp));

		// int ans = 0;
		// for (int i = a; i <= b; i++) {
		// 	ans += Flowers(i, k);
		// }
		// cout << ans << endl;
		//O(n)/O(nlogn) me chala sakte ho!

		cout << (pre[b] - pre[a - 1] + mod) % mod << endl;
	}

}


//a-b: pre[b]-pre[a-1];


//Sum of[l,r]=pre[r]-pre[l-1];

//LIS:Longest Increasing Subsequence.