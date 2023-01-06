#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int a[N], b[N], c[N];
//a[1]=pelhe din activity kya happiness milegi.

int Vacation(int n) {
	int dp[n + 1][3];
	dp[1][0] = a[0];
	dp[1][1] = b[0];
	dp[1][2] = c[0];


	for (int i = 2; i <= n; i++) {
		dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
		dp[i][2] = max(dp[i - 1][1], dp[i - 1][0]) + c[i];
	}

	return max(dp[n][0], dp[n][1], dp[n][2]);
}


int main() {
	int n;
	cin >> n;//1->n tak hain.

	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i] >> c[i];
	}

	cout << Vacation(n) << endl;
}

// 5 th day: ka answer kya hoga?: 5th day me a activity kar raha hu!
// 4th day tak ka max answer nikalo:(b and  c):
// i==5, i-1, (dp[i-1][1]=? dp[i-1][2]=?) uske sath main 5th day ka activity a kar raha hu!