#include<bits/stdc++.h>
using namespace std;
// const int N = 0;



int Solve(int* arr, int n) {

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

//Arrays are always passed by reference:

int main() {
	int a[] = {1, 12, 13, 14, 15};

	/*cout << a << " " << *a << endl;
	cout << *a + 1 << " " << *(a + 1) << " " << a[1] << endl;*/
	int x = 5;
	cout << Solve(a, x);

}