#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int fib(int n) {

	if (n == 0 or n == 1) {
		return n;
	}

	int option1 = fib(n - 1);
	int option2 = fib(n - 2);

	return option1 + option2;
}


int main() {
	int n;
	cin >> n;


	cout << fib(n) << endl;
}