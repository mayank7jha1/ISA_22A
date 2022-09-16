#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool compare(string x, string y) {
	if (x.find(y) == 0 or y.find(x) == 0) {

		if (x.length() > y.length()) {
			return true;
		} else {
			return false;
		}
		//return x.length() > y.length();
	}

	return x < y;
}


int main() {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
}

/*s[0] = bat: so karo sort:

       s is ka matlab hai poore string array ko karo sort:*/