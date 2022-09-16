#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool compare(string x, string y) {//54 9
	string xy = x + y; //549
	string yx = y + x;//954

	if (xy > yx) {
		return true;
	} else {
		return false;
	}
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a + 0, a + n, compare);



		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
		cout << endl;
	}
}