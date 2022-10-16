#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };


void Solve(char* in, int i, int j, char* output) {
	//Base Case:

	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}


	int digit = in[i] - '0';

	for (int k = 0; keypad[digit][k] != '\0'; k++) {

		output[j] = keypad[digit][k];

		Solve(in, i + 1, j + 1, output);
	}

}




int main() {
	char in[1000];
	cin >> in;
	char output[1000];
	Solve(in, 0, 0, output);
}

//12