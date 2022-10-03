#include<bits/stdc++.h>
using namespace std;
// const int N = 0

int Flowers(int n, int k) {

	if (n == 0) {
		return 1;
	}

	int option1 = Flowers(n - 1, k);
	int option2 = 0;
	if (n >= k) {
		option2 = Flowers(n - k, k);
	}
	return option1 + option2;
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << Flowers(n, k) << endl;
}

