#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void StairCase(int *a, int n, int i, int steps, bool *visited, int &ans) {

	if (i == n) {
		ans = min(ans, steps);
		return;
	}

	visited[i] = 1;

	if (i + 1 <= n and !visited[i + 1]) {
		StairCase(a, n, i + 1, steps + 1, visited, ans);
	}

	if (i + a[i] <= n and !visited[i + a[i]]) {
		StairCase(a, n, i + a[i], steps + 1, visited, ans);
	}

	visited[i] = 0;//Because aisa hosakta hain ki aap is stair par kisi aur path
	//se aao baad me;
	return;

}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int a[n + 1];
		bool visited[10005] = {0};
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int ans = INT_MAX;
		StairCase(a, n, 0, 0, visited, ans);
		if (ans == INT_MAX) {
			cout << "-1" << endl;
		} else {
			cout << ans << endl;
		}
	}
}