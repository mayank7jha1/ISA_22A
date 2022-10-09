#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


void Subsequences(char *in, char* output, int i, int j) {

	if (in[i] == '\0') { //condition hogi n ke form n being the size of string
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	//option2==Item ko lelo;
	output[j] = in[i];
	Subsequences(in, output, i + 1, j + 1);

	//Option1=Item ko nahi lerahe:
	Subsequences(in, output, i + 1, j);

}

int main() {
	char input[100];
	cin >> input;

	char output[100];
	Subsequences(input, output, 0, 0);
}