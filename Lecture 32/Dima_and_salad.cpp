#include<bits/stdc++.h>
using namespace std;
const int N = 100001;
#define int long long
#define size 100005
int n, k;
int *taste, *calorie;
int shift = 1e5 + 2;
int dp[101][2 * size];


int Dima_and_Salad(int i, int sum) {
	//Base Case:

	if (i == n) {
		if (sum == 0) {
			return 0;
		}

		return -1e12;
	}


	if (dp[i][sum + shift] != -1) {
		return dp[i][sum + shift];
	}

	//YOu can Choose this item/fruit:
	int option1 = taste[i] +
	              Dima_and_Salad(i + 1, (sum + taste[i] - k * calorie[i]));

	//You are not choosing this fruit

	int option2 = 0 + Dima_and_Salad(i + 1, sum);

	dp[i][shift + sum] = max(option1, option2);
	return dp[i][sum + shift];
}

int32_t main() {
	cin >> n >> k;
	taste = new int[n];
	calorie = new int[n];
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n; i++) {
		cin >> taste[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> calorie[i];
	}
	int ans = Dima_and_Salad(0, 0);

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}

}




//min value of sum: 100 item the: taste=0
//k=10 and colorie=100;
//100(0-10*100)=100000

// (1-1*1)=0

// 5 3
// 4 4 4 4 4
// 2 2 2 2 2

// (4 - 3 * 2):


// 	(-2):

// sum ko zero nahi bana paaoge: