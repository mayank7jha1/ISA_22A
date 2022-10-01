#include<bits/stdc++.h>
using namespace std;
//const int N = 0;

void Replace(char x, char y, int i, string &s) {

	if (i >= s.length()) {
		return;
	}

	if (s[i] == x) {
		s[i] = y;
	}

	Replace(x, y, i + 1, s);
}


// har ek call par changes reflect hone chahiye

int main() {
	string s;
	cin >> s;
	char x, y;
	cin >> x >> y;

	//Replace all occurences of x in the string with y.
	Replace(x, y, 0, s);

	cout << s << endl;

}


