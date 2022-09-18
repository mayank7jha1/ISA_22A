#include<bits/stdc++.h>
using namespace std;
// const int N = 0;



int Solve(int a[], int n) {
	int sum = 0;
	//cout << a[1] << *(a + 1) << endl;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	cout << Solve(a, n) << endl;
}