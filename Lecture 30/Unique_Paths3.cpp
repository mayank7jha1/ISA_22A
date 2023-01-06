class Solution {
public:
    int dp[101][101];
    int uniquePaths(int m, int n) {
        if (m == 1 and n == 1) {//m==0 and n==0
            return 1;//Agar Grid sirf ek box ka hain.
        }

        for (int i = 1; i <= m; i++) {//not equal
            for (int j = 1; j <= n; j++) {//not equal
                if (i == 1 or j == 1) {//i==0 pr j==0
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }
        return dp[m][n];//dp[m-1][n-1]
    }
};