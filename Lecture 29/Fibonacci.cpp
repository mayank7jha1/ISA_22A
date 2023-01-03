#include<bits/stdc++.h>
using namespace std;
int dp[100005];

//n is non negative:
//Top Down Approach!:

int fib(int n) {//n=5
	//Aage kaise badh rahe hain: using n: n
	if (n <= 1) {
		return n;
	}

	if (dp[n] != -1) {
		return dp[n];
	}

	int option1 = fib(n - 1);//n=xyz
	int option2 = fib(n - 2);//m=ytx
	dp[n] = option2 + option1;
	return dp[n];//5 ka answer is xyz+ytz
}


int main() {
	int n;
	cin >> n;


	// for (int i = 0; i < 100005; i++) {
	// 	dp[i] = -1;
	// }

	memset(dp, -1, sizeof(dp));
	//Print karvate ho kya n par answer kya hain?

	cout << dp[n] << endl;
}


//dp ka ith term: ek nth fibonacci number:



