#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long

vector<int>primes;

void Prime_seive() {
	const int N = 1000001;
	bool p[N] = {0};

	for (int i = 3; i * i <= N; i += 2) {
		if (p[i] == 0) {
			for (int j = i * i; j <= N; j += i) {
				p[j] = 1;
			}
		}
	}
	primes.push_back(2);

	for (int i = 3; i <= N; i += 2) {
		if (p[i] == 0) {
			primes.push_back(i);
		}
	}
}

void Segmented_Sieve(int a, int b) {
	int p[b - a + 1] = {0}; //Range me konsa starting number hain

	for (int i = 0; primes[i]*primes[i] <= b; i++) {
		int start = ((a / primes[i]) * primes[i]);
		if (start < a) {
			start += primes[i];
		}

		for (int j = start; j <= b; j = j + primes[i]) {
			p[j - a] = 1;
		}

		if (start == primes[i]) {
			p[start - a] = 0;
		}
	}

	for (int i = a; i <= b; i++) {
		if (p[i - a] == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}



int32_t main() {
	Prime_seive();
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a == 1) {
			a++;
		}
		Segmented_Sieve(a, b);
	}

}