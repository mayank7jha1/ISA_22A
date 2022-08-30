#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
#define size 10005

//But if your are submit the code please make this size as 10^5:
//I am not taking size as 10^5 because i will be taking many such array
//and hence memory constraint of my PC but it will work fine in
//online compilers.

int32_t main() {
	int n, m, k;
	cin >> n >> m >> k;
	int a[n + 1] = {0};//1 Based Index to simplify the problem.

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int l[size], r[size], d[size];

	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	int operations_count[size] = {0};

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		operations_count[x] = operations_count[x] + 1;
		operations_count[y + 1] = operations_count[y + 1] - 1;
	}

	//This operations count will only be complete after taking the prefix array

	for (int i = 1; i <= m; i++) {
		operations_count[i] = operations_count[i - 1] + operations_count[i];
	}


	int sum_after_operation[size] = {0};

	for (int i = 1; i <= n; i++) {

		sum_after_operation[l[i]] = sum_after_operation[l[i]] +
		                            (operations_count[i] * d[i]);

		sum_after_operation[r[i] + 1] = sum_after_operation[r[i]+1] -
		                                (operations_count[i] * d[i]);
	}

	//Prefix sum:

	for (int i = 1; i <= n; i++) {
		sum_after_operation[i] = sum_after_operation[i - 1] +
		                         sum_after_operation[i];
	}

	//Add the original array to this

	for (int i = 1; i <= n; i++) {
		a[i] = sum_after_operation[i] + a[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}

}


// compiler will convert all the 64 bit integer or int to long long
// but main should always return an integer

// by making int of main as 32 bit now my compiler will not
// convert this 32 bit int to long long
