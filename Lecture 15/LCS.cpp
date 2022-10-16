#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
// int ans;

int solve(string &s, string &t, int  i, int j) {

	if (i >= s.length() or j >= t.length()) {
		//i is for iterating over the string s
		//j is for iterating over string t;
		//if i becomes greater than s tring length toh stop
		//ans same case with t.
		return 0;
	}


	if (s[i] == t[j]) {
		return  ans = 1 + solve(s, t, i + 1, j + 1);
	} else {
		return max(solve(s, t, i + 1, j), solve(s, t, i, j + 1));
	}
}


int main() {
	string s, t;
	cin >> s >> t;
	cout << solve(s, t, 0, 0) << endl;
}