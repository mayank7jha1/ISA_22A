#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


void String_Equivalence(char* output, int i, int Max_character, int n) {
	if (i == n) {
		output[i] = '\0';
		cout << output << endl;
		return;
	}


	for (char ch = 'a'; ch <= Max_character; ch++) {
		output[i] = ch;

		//agar main current box me maximum character ko put kar raha hu
		//toh next recursion call ke liye max character badh ke
		//max character +1 ho jayega.

		if (ch == Max_character) {
			String_Equivalence(output, i + 1, Max_character + 1, n);
		} else {
			String_Equivalence(output, i + 1, Max_character, n);
		}
	}
}

int main() {
	int n;
	cin >> n;

	char output[10000];
	String_Equivalence(output, 0, 'a', n);
}