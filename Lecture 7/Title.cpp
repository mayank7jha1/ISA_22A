#include<bits/stdc++.h>
using namespace std;
bool map1[30] = {0};//Sabko Initialise kiya hua hain false se.

void Title(string a, int k) {
	int i = 0;
	int j = a.length() - 1;

	//Pehle aap bahar se ander ya fir middle ke taraf jaarahe hain.

	while (i < j) {
		if (a[i] == '?' and a[j] == '?') {
			i++;
			j--;
			continue;
		} else if (a[i] != '?' and a[j] == '?') {
			a[j] = a[i];
			map1[a[i] - 'a' + 1] = true;
			i++;
			j--;
		} else if (a[j] != '?' and a[i] == '?') {
			a[i] = a[j];
			map1[a[i] - 'a' + 1] = true;
			i++;
			j--;
		} else if (a[i] == a[j]) {
			map1[a[i] - 'a' + 1] = true;
			i++;
			j--;
		} else {
			cout << "IMPOSSIBLE" << endl;
			return;
		}
	}

	//You would ideally at the middle index:

	//What if string was of odd length:

	if (i == j and a[i] != '?') {
		map1[a[i] - 'a' + 1] = true;
	}


	//You have to move outwards:// in this case i will be at the middle
	//i have not again initialised i.

	while (i >= 0) {
		while (k > 1 and map1[k] == 1) {
			//ki agar K ki value is 4 and map me 4 th index is true:
			k--;
			//First character from the largest which is not used.
		}

		if (a[i] == '?' and a[j] == '?') {
			a[i] = a[j] = 'a' + k - 1;
			map1[k] = true;
			i--;
			j++;
		} else {
			i--;
			j++;
		}
	}

	if (k == 1 and map1[k] == true) {
		cout << a << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
		return;
	}

}


int main() {
	int k;
	cin >> k;//This k is 1 indexed based.
	string s;
	cin >> s;

	Title(s, k);
	//cout << "Mayanl";
}