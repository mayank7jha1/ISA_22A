#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int Power(int x, int y) {

	if (y == 0) {
		return 1;
	}

	int ans = x * Power(x, y - 1);
	return ans;
}


int Power2(int x, int y, int i) {

	if (i > y) {
		return 1;
	}

	int ans = x * Power2(x, y, i + 1);
	return ans;

}

int main() {
	// x^y;
	int x, y;
	cin >> x >> y;

	cout << Power(x, y) << endl;
	cout << Power2(x, y, 1) << endl;
}

