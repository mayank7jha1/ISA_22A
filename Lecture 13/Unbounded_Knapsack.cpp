#include<bits/stdc++.h>
using namespace std;


int Unbounded_Knapsack(int W, int wt[], int val[], int n) {
	if (n == 0) {
		return 0;
	}

	int option1 = 0 + Unbounded_Knapsack(W, wt, val, n - 1);

	int option2 = INT_MAX;
	if (wt[n - 1] <= W) {
		option2 = val[n - 1] + Unbounded_Knapsack(W - wt[n - 1], wt, val, n);
	}

	return max(option1, option2);
}

int main() {
	int W = 50;
	int val[] = {60, 100, 120};
	int wt[] = {10, 20, 30};
	int n = sizeof(val) / sizeof(int);

	cout << Unbounded_Knapsack(W, wt, val, n);
}