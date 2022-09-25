#include<bits/stdc++.h>
using namespace std;
//int a[100000005] = {0};

int n;
// int a[n];


int main() {
	cin >> n;
	int a[n];//Static Array:
	int *p = new int[n]; //Dynamic Array:
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << a[2];
}


