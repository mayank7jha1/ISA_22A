#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
int sum[100005] = {0};

int k;
string a;

void Solve() {

	int s = 0;
	int final_ans = 0;
	sum[0] = 1;
	for (int i = 0; i < a.length(); i++) {
		s += a[i] - '0';
		if (s >= k) {
			final_ans += sum[s - k];
		}
		sum[s]++;
	}
	cout << final_ans << " ";
}



int32_t main() {
	cin >> k;
	cin >> a;

	Solve();
}