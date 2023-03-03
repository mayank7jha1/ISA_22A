//Random Numbers ko generate karti hain.

#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	srand(time(0));

	int n = rand() % 1000;//n: 0 se 999
	int m = rand() % 2500;//m: 0 se 2499

	cout << n << " " << m << endl;
}