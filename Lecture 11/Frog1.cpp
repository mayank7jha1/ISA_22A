#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int Solve(int *a, int i, int n) {

	if (i == n - 1) {
		return 0;//Iska matlab yaha tak ka answer already nikal chuke ho!!
	}

	//1 step ka jump lerahe ho!
	int option1 = Solve(a, i + 1, n) + abs(a[i] - a[i + 1]);

	int option2 = INT_MAX;
	//2 step ka jump lerahe hain?
	if (i + 2 <= n - 1) {
		option2 = abs(a[i] - a[i + 2]) + Solve(a, i + 2, n);
	}

	return min(option1, option2);
}

int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Solve(a, 0, n) << endl;
}