class Solution {
public:
	int dp[101][101];
	int uniquePaths2(int m, int n) {
		if (m == 0 and n == 0) {
			return 1;
		}

		if (m < 0 or n < 0) {
			return 0;
		}

		if (dp[m][n] != -1) {
			return dp[m][n];
		}


		return dp[m][n] = uniquePaths2(m - 1, n) + uniquePaths2(m, n - 1);
	}

	int uniquePaths(int m, int n) {
		memset(dp, -1, sizeof(dp));//2-d initialise with -1.
		//memset can initialise values with 0 and -1.
		return uniquePaths2(m - 1, n - 1);
	}
};



