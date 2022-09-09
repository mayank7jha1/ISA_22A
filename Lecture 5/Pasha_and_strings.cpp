#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long

int32_t main() {
	string s;
	cin >> s;
	int count[100005] = {0};
	int m;
	cin >> m;//No. of days:

	//The given indexing of the string in the question is of
	//1 based but by default my computer takes
	//string indexing as 0.


	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		count[x - 1]++;
	}

	int ans = 0;
	int sum = 0;
	int n = s.length();

	// int pre[100005] = {0};

	// pre[0] = count[0];
	// for (int i = 1; i < s.length() + 1; i++) {
	// 	pre[i] = pre[i - 1] + count[i];
	// }

	for (int i = 0; i < s.length() / 2; i++) {
		sum += count[i];
		if (sum % 2 == 1) {
			swap(s[i], s[s.length() - i - 1]);
		}
	}
	cout << s << endl;

}

/*abcdef
4
2 1 3 1:

2:

count[1]=++: because string ka indexing jo hain vo zero base hotA HAIN
s[1]=b character: jo 2 represent karta hain question ke according
as question me indexing jo hain vo 1 based hain.

1 2 3 4 5 6
a b c d e f
0 1 2 3 4 5

2 aaya to count[1]++;
1 count[0]++
3 count[2]++
1 count[0]++;*/