#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int freq[10] = {0};
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			x = x % 10;
			freq[x] = freq[x] + 1;
		}

		int ans[30] = {0};
		int k = 0;
		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j < min(freq[i], 3); j++) {
				ans[k] = i;
				k++;
			}
		}

		int flag = 0;
		int length = k; //ans ki length: max length=30

		for (int i = 0; i < length; i++) {
			for (int j = i + 1; j < length; j++) {
				for (int k = j + 1; k < length; k++) {
					if ((ans[i] + ans[j] + ans[k]) % 10 == 3) {
						flag = 1;
						break;
					}
				}
			}
		}

		if (flag == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}

	}
}


// ans[] = {1, 1, 1, 2, 3, 4, 5, 6}; max size of this array can be 30:


