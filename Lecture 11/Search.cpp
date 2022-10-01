#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


bool Search(int* a, int s, int key) {//s=4
	if (s < 0) {
		return false;
	}
	if (a[s] == key) {
		return true;
	}
	return Search(a, s - 1, key);//s=3
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int key;
	cin >> key;

	cout << Search(a, n - 1, key) << endl;//n-1=4
}