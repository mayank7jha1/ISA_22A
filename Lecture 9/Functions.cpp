#include<bits/stdc++.h>
using namespace std;


int sum(int x, int y) {
	return x + y;
}

double sum(double x, double y) {
	return x + y;
}


float sum(double x, int y, double z) {
	return x + y + z;
}

//Overloading: Function Overloading

//Different type or different no of arguments.

int main() {
	cout << sum(10, 25) << endl;

	cout << sum(10.5, 20.7) << endl;

	cout << sum(10.2, 3, 20.3) << endl;
}