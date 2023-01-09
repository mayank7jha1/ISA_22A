#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
#define As 1001
int n, p, k;
int cost[As];

int Price() {
	int dp[As] = {0};
	//dp[i]: ith point tak ke (saare )item ko kharidne me kitna
	//paisa lag raha hain.
	sort(cost, cost + n);

	int ans = 0;
	//k=5, k=4
	for (int i = 0; i < n; i++) {
		if (i < k - 1) {
			//i==0
			dp[i] = cost[i] + (i == 0 ? 0 : dp[i - 1]);
		} else if (i == k - 1) {
			dp[i] = cost[i];
		} else {
			dp[i] = dp[i - k] + cost[i];
		}
		if (dp[i] <= p) {
			ans = i + 1;
		}
	}

	return ans;
}

//5 item ka offer tha that means aap 4th index tak
//ke offer ki baat kar rahe ho: 5th index:
//1 index se 5th index tak offer lagana hain.
//0 th index iska paisa aapko dena padega.

//0th item tak ka answer kya tha: dp[5-5]=dp[0]+
//cost[5]:1---5th index tak jo item hain. 5th index


//k is 1 based:


//Agar k = 5: We are talking about 5 items:
//zero  based me convert karne ka matlab k ko: 4 tak
//4 index tak ke atleast: item lunga tab mujhe
//max of k items dena hain.
//Agar main 4 index se piche khada hu toh mujhe ab
//tak ka total paisa dena hain.

int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> p >> k;
		for (int i = 0; i < n; i++) {
			cin >> cost[i];
		}
		cout << Price() << endl;
	}
}






