#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];

string getLCS(string &s, string &t, int len) {
	string x;
	int i = 0, j = 0;
	while (len > 0) {
		if (s[i] == t[j]) {
			x.push_back(s[i]);
			i++;
			j++;
			len--;
		} else {
			if (dp[i][j + 1] > dp[i + 1][j]) {
				j++;
			} else {
				i++;
			}
		}
	}
	return x;
}

int lenLCS(string &s, string &t, int i , int j) {
	if (i >= s.length() or j >= t.length()) {
		return 0;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	if (s[i] == t[j]) {
		return dp[i][j] = 1 + lenLCS(s, t, i + 1, j + 1);
	} else {
		return dp[i][j] = max(lenLCS(s, t, i, j + 1), lenLCS(s, t, i + 1, j));
	}
}


string solve(string s, string t) {
	memset(dp, -1, sizeof(dp));
	int len = lenLCS(s, t, 0, 0);
	return getLCS(s, t, len);
}

int main() {
	string s, t;
	cin >> s >> t;
	cout << solve(s, t) << endl;
}
//LCS: Print LCS:


//Atcoder: Vacation: H.W.
//GRID DP: