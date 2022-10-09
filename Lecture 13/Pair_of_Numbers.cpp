#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int ans = INT_MAX;


void Function(int a, int b, int Steps) {
	if (a == 1 and b == 1) {
		ans = min(ans, Steps);
	}
	if (a - b > 0) {
		Function(a - b, b, Steps + 1);
	}
	if (b - a > 0) {
		Function(a, b - a, Steps + 1);
	}
}

void Solve(int n) {
	if (n == 1) {
		cout << 0 << endl;
		return;
	}
	for (int i = 1; i < n; i++) {
		Function(i, n - i, 1);
	}
	cout << ans << endl;
}


int main() {
	int n;
	cin >> n;

	Solve(n);
}
