#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int t;
	cin >> t;

	while (t--) {
		string keyboard, word;
		cin >> keyboard >> word;

		//keyboard string vo 0 se kari hain:


		//cout << keyboard << endl << word << endl;

		int mapping[256] = {0};

		for (int i = 0; i < 26; i++) {

			mapping[keyboard[i]] = i + 1;
			//position 0 based nahi hain 1 based hain:
		}

		int ans = 0;

		for (int i = 0; i < word.length() - 1; i++) {
			ans = ans + abs(mapping[word[i]] - mapping[word[i + 1]]);
		}
		cout << ans << endl;
	}
}

