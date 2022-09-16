#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int ans[100005] = {0};

void diStringMatch(string s) {

	if (s.length() == 0) {
		return;
	}

	int largest = s.length();
	int smallest = 0;
	int j = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'I') {
			ans[j] = smallest;
			smallest++;
		} else {
			ans[j] = largest;
			largest--;
		}
		j++;
	}
	ans[j] = smallest;
}

int main() {
	string s;
	cin >> s;
	diStringMatch(s);

	for (int i = 0; i <= s.length(); i++) {
		cout << ans[i] << " ";
	}
}