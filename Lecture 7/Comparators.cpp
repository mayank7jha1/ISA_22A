#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool compare(int x, int y) {
	// if (x < y) {
	// 	return false;
	// } else {
	// 	return true;
	// }
	return x > y;
}

int main() {
	int a[] = {5, 1, 2, 3, 4};
	int n = 5;
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	// sort(a, a + n);

	sort(a, a + n, compare);

	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
}

/*
sort stl :


bubble sort and merge ka combination:

when n is small bubble sort and when n is very large merge sort;*/