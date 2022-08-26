#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
//freQ=10^8// map data

int main() {
	int n;
	cin >> n;

	int a[n];
	int maximum_element = INT_MIN; //== = -~
	int minimum_element = INT_MAX;//~

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		maximum_element = max(a[i], maximum_element);
		minimum_element = min(a[i], minimum_element);

	}

	int freq[maximum_element - minimum_element + 1] = {0};

	for (int i = 0; i < n; i++) {

		freq[a[i] - minimum_element] = freq[a[i] - minimum_element] + 1;
	}

	for (int i = 0; i < maximum_element - minimum_element + 1; i++) {
		if (freq[i] > 0) {
			cout << i + minimum_element << "-->" << freq[i] << endl;
		}
	}
}

/*
0-- > -2

freq[0] > 0 : 2
0-(-2) == = 2
*/