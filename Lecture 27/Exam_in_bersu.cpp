#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
int a[200005] = {0};
int time1[101] = {0};//1-100 ke bich me hoga:



void Solve() {
	int total = 0;
	for (int i = 0; i < n; i++) {
		int x = total + a[i] - m;//Extra time required:
		int student_removed = 0;

		if (x > 0) {
			//You have to remove the student with the maximum time.
			for (int j = 100; j >= 1; j--) {
				int y = time1[j] * j;
				if (x <= y) {
					student_removed += (x / j) + ((x % j) > 0 ? 1 : 0);
					break;
				}
				student_removed += time1[j];
				x = x - y;//Extra time
			}
		}

		time1[a[i]]++;
		total += a[i];
		cout << student_removed << " ";
	}
}


int32_t main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Solve();
}