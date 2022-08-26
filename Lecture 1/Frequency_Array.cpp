#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
//freQ=10^8// map data

int main() {
	int n;
	cin >> n;

	int a[n];
	int ans = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ans = max(a[i], ans);
	}

	int freq[ans + 1] = {0};

	/*	maximum element is 16:
		but the box where the 16th index is it is at
		17th box why because we are taking 0 based index:

		*/

	for (int i = 0; i < n; i++) {
		freq[a[i]] = freq[a[i]] + 1;
	}

	for (int i = 0; i <= ans; i++) {
		if (freq[i] > 0) {
			cout << i << "-->" << freq[i] << endl;
		}
	}
}

// space complexity: extra spaces bach gaywe?

/*
9
1 2 1 3 4 5 1 2 16
max element 16 200?

the maximum element whose frequency we are
interested will be 16:

freq[100]=?
frq[200]=?
*/
