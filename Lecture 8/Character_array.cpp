#include<bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// int n;
	// cin >> n;

	// int a[] = {1, 2, 3, 4};
	// //cout << a << endl;

	//Hexadecimal address: which is the base address for the array
	//a[0] ka jo address hain.

	/*
		char a1[] = {'M', 'A', 'Y', 'A', 'N', 'K'};

		char a2[] = {"Mayank"};

		//dono me a1[0] ya a2[0] me M pada hain.

		cout << a1 << endl;
		cout << a2 << endl;


		cout << &n << endl;
		cout << *(&n) << endl;

		cout << n << endl;*/

	/*
		cout << a << endl;
		cout << (&a) << endl;
		cout << &a[0] << endl;
		cout << &a[1] << endl;
		cout << (a + 1) << endl;
		cout << (&a + 1) << endl;
		cout << *(a + 1) << endl;
		//Value at the address of the first
		//block in array:

		cout << *(a + 1) << " " << a[1] << endl;
		//[] brackets are overloaded:


		int x = 10;
		int y = 20;
		cout << x + y << endl;


		string s = "May";
		string s1 = "Say";

		cout << s + s1 << endl;

		//+ sign this is overloaded*/


	// int a[] = {1, 2, 3, 4, 5};
	// char a2[] = {"Mayank"};
	// //cout << endl;

	// cout << a << endl;
	// cout << a2 << endl;

	// <<cout me integer : base Address
	//  and


	/*char a3[] = {'M', 'A', 'Y', '\0'};
	cout << a3 << endl;

	for (int i = 0; a3[i] != '\0'; i++) {
		cout << a3[i];
	}
	cout << endl;


	// "::::"---->>collection of letters:


	char a[] = {"Mayank"};

	cout << a << endl;*/


	//char a[100];
	// cin >> a;
	// cout << a << endl;

	// char ch = cin.get();
	// while (ch != '\n') {
	// 	cout << ch;
	// 	ch = cin.get();
	// }

	// while (cin >> a) {
	// 	cout << a;
	// }

	// cin.get(a, 100);

	// cout << a << endl;
	/*	cin.get(a, 100);
		char ch;

		while (cin.get(ch)) {
			cout << ch;
		}
	*/

	// char a[100];
	// int n;
	// cin.get(a, 100);
	// cin >> n;
	// cout << a;

	// cout << n << endl;

	// sentence ka input using get:

	// integer ke input:
	//cin.ignore();


	// char ch[100];
	// cin.getline(ch, 100, '@');
	// cout << ch << endl;
	// // int x;
	// // cin >> x;
	// cout << ch << " " << endl;
	// // cin.ignore();
	// string s;
	// getline(cin, s);

	// cout << s << endl;


	// cout << &ch << endl;

	// float x = (float)10 / 3; //Inplict Type Casting

	// cout << (int)x << endl;

	// cout << x << endl;

// float: bucket integers and decimal

	// int x = 10.99999;
	// x = 10;

	// float ya


	// char ch[100] = {'A', 'B', 'C', '\0'};

	// cout << &ch << endl;
	//cout << (void*)ch << endl;

	int x = 10;
	int* xptr = &x;
	cout << &x << " " << xptr << endl;
	cout << *xptr << " " << x << endl;
	cout << *(&x) << endl;
	cout << &xptr << endl;
	cout << *(&xptr) << endl;


	// value at address of x
}




