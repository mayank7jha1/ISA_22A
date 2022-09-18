#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void Sum(int* a, int* b) {
	*a = *a + 10;
	*b = *b + 10;
	cout << "Answer under Function" << endl;
	cout << *a << " " << *b << endl;
}



void Sum(int &a, int &b) {
	a = a + 10;
	b = b + 10;
	cout << "Answer under Function" << endl;
	cout << a << " " << b << endl;
}


int main() {
	int x, y;
	cin >> x >> y;
	cout << "Answer Under Main" << endl;
	cout << x << " " << y << endl;

	Sum(x, y);
	cout << "Answer Under Main" << endl;
	cout << x << " " << y << endl;
}