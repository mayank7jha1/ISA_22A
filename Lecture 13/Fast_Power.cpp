#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int fast_power_using_recursion(int x, int y) {

	if (y == 0) {
		return 1;
	}

	int fraction = fast_power_using_recursion(x, y / 2);
	if (y % 2 == 1) {
		return x * fraction * fraction;
	}
	return fraction * fraction;

}

int main() {

	int x, y;
	cin >> x >> y;
	cout << fast_power_using_recursion(x, y) << endl;
}
