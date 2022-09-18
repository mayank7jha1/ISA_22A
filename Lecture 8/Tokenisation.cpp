#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	char ch[100];
	cin.getline(ch, 100);

	// cout << ch << endl;
	// char *token = strtok(ch, " ");

	// while (token != NULL) {
	// 	cout << token << endl;
	// 	token = strtok(NULL, " ");
	// }

	string s;
	getline(cin, s);

	cout << s << endl;
	char *token = strtok((char*)s.c_str(), " ");

	while (token != NULL) {
		cout << token << endl;
		token = strtok(NULL, " ");
	}
}


// strtok(ch, " ");


// Sentence ko break karna?
// kisi deliminator ke about
//space ke according break kardo sentence ko
//Mayank
//is
//a
//boy;


// s = Mayank is a Boy;

// t = Boy a is Mayank;



