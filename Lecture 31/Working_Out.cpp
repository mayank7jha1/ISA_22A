// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i=(int)(a);i<=int(b);i++)
#define RF(i,a,b) for(int i=int(a);i>=(int)b;i--)
#define Max 1005

int dp1[Max][Max];//Boy 1 se x jaata hain:
int dp2[Max][Max];//Boy m se x par aata hain:
int dp3[Max][Max];//Similar to Boy:
int dp4[Max][Max];

int main() {
	int calorie[Max][Max];
	int n, m, ans = 0;
	cin >> n >> m;
	//cout << n << m;

	F(i, 1, n) {
		F(j, 1, m) {
			cin >> calorie[i][j];
		}
	}

	// 1 se kisi x tak :
	F(i, 1, n) {
		F(j, 1, m) {
			dp1[i][j] = max(dp1[i - 1][j], dp1[i][j - 1]) + calorie[i][j];
		}
	}
	// From n to cell 1 :

	RF(i, n, 1) {
		RF(j, m, 1) {
			dp2[i][j] = max(dp2[i + 1][j], dp2[i][j + 1]) + calorie[i][j];
		}
	}

	// Girl ke liye niche se x tak:
	RF(i, n, 1) {
		F(j, 1, m) {
			dp3[i][j] = max(dp3[i + 1][j], dp3[i][j - 1]) + calorie[i][j];
		}
	}

	// Girl comes from end to meeting cell
	F(i, 1, n) {
		RF(j, m, 1) {
			dp4[i][j] = max(dp4[i - 1][j], dp4[i][j + 1]) + calorie[i][j];
		}
	}

	F(i, 2, n - 1) {
		F(j, 2, m - 1) {
			int op1 = dp1[i][j - 1] + dp2[i][j + 1] + dp3[i + 1][j] + dp4[i - 1][j];
			int op2 = dp1[i - 1][j] + dp2[i + 1][j] + dp3[i][j - 1] + dp4[i][j + 1];
			ans = max({ans, op1, op2});
		}
	}
	cout << ans << endl;
	//cout << "Maank";
	return 0;
}
