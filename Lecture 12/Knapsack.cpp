#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int knapSack(int W, int* w, int* val, int n) {
	if (n == 0 or W == 0) {
		return 0;
	}

	if (wt[n - 1] > W) {
		return knapSack(W, w, val, n - 1);
	}

	int option1 = val[n - 1] + knapSack(W - wt[n - 1], w, val, n - 1);
	int option2 = 0 + knapSack(W, w, val, n - 1);
	return max(option1, option2);

}


int main() {
	int val[];
	int wt[];
	int W;
	int n = sizeof(val) / sizeof(int);

	cout << knapSack(W, wt, val, n);
}



