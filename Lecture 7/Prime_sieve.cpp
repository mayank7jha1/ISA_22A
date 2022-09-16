#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long


void Prime_seive(int N) {
	bool p[100005] = {0};
	for (int i = 3; i * i <= N; i += 2) {
		if (p[i] == 0) {
			for (int j = i * i; j <= N; j += i) {
				p[j] = 1;
			}
		}
	}

	cout << 2 << " ";

	for (int i = 3; i <= N; i += 2) {
		if (p[i] == 0) {
			cout << i << " ";
		}
	}
}

int32_t main() {
	int n;
	cin >> n;
	Prime_seive(n);
	return 0;
}

// O(n*log(log(n)))~~ = O(n);

// log(10^9)=9*1: