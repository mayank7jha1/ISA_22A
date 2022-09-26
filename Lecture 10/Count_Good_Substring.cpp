#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long

int count1[2][2] = {0};

void CountGoodSubstrings(string s) {
	int n = s.length();

	int odd = 0;
	int even = 0;
	for (int i = 0; i < n; i++) {
		odd++;

		if (i % 2 == 1) {
			//Even position par add kar rahe hain:
			odd += count1[s[i] - 'a'][0];
			count1[s[i] - 'a'][0]++;
			even += count1[s[i] - 'a'][1];

		} else {

			odd += count1[s[i] - 'a'][1];
			count1[s[i] - 'a'][1]++;
			even += count1[s[i] - 'a'][0];
		}
	}
	cout << even << " " << odd << endl;
}


int32_t main() {
	string s;
	cin >> s;
	CountGoodSubstrings(s);
}