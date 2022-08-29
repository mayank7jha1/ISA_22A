#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;


	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int pre[n + 1] = {0};

	pre[0] = a[0];
	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
	cout << endl;

	int k;
	cin >> k;
	while (k--) {
		int x, y;
		cin >> x >> y;

		//Range sum between this x and y index:
		if (x == 0) {
			cout << pre[y] << endl;
		} else {
			cout << pre[y] - pre[x - 1] << endl;
		}

	}
}