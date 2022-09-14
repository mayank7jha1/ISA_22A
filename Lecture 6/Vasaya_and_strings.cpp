#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int k, n;
string s;

/*aabaabaaa: k = 1;
count = 2;
j = 0 and i = 2nd b; matlab index: 5;*/

int Solve(char x) {
	int ans1 = INT_MIN;

	int j = 0;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != x) {
			count++;
		}
		while (count > k and j <= i) {
			if (s[j] != x) {
				count--;
			}
			j++;
		}

		if (i - j + 1 > ans1) {
			ans1 = i - j + 1;
		}
	}
	return ans1;
}


int main() {
	cin >> n >> k;
	cin >> s;


	//First Try: Convert b->a;

	int ans = Solve('a');

	int ans1 = Solve('b');

	cout << max(ans, ans1) << endl;
}