#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int Solve(int i, vector<int>&v, vector<int>&dp) {
	if (i == v.size() - 1) {
		return 0;
	}
	if (dp[i] != -1) {
		return dp[i];
	}

	int option1 = INT_MAX;
	int option2 = INT_MAX;

	option1 = abs(v[i] - v[i + 1]) + Solve(i + 1, v, dp);

	if (i + 2 <= v.size() - 1) {
		option2 = abs(v[i] - v[i + 2]) + Solve(i + 2, v, dp);
	}

	return dp[i] = min(option1, option2);
}

int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int>dp(n + 1, -1);

	//Mere pass stones vo directly map hoskate hain array se index se

	cout << Solve(0, v, dp);
}