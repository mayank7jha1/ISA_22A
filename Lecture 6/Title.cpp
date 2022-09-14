#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool map1[30] = {0};

void Title(char a[], int k) {
	int i = 0;
	int j = strlen(a) - 1;

	while (i < j) {
		if (a[i] == '?' and a[j] == '?') {
			i++, j--;
			continue;
		} else if (a[i] != '?' and a[j] == '?') {
			a[j] = a[i];
			map1[a[i] - 'a' + 1] = true;
		} else if (a[i] == '?' and a[j] != '?') {
			a[i] = a[j];
			map1[a[i] - 'a' + 1] = true;
		} else if (a[i] == a[j]) {
			map1[a[i] - 'a' + 1] = true;
		} else {
			cout << "IMPOSSIBLE" << endl;
			return;
		}
	}


}


// A_ _ _ _ _B
int main() {
	int k;
	cin >> k;//This is one based: k=4 4 characters hone:
	char a[1005];
	cin >> a;

	cout << Title(a, k) << endl;
}