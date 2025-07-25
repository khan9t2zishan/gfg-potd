class Solution {
  public: 
    int uniquePaths(vector<vector<int>> &grid) {  
        // code here
           int n = grid.size();
        int m = grid[0].size();

        // If start or end is blocked
        if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1) {
            return 0;
        }

        // Create a 2D dp array initialized to 0
        std::vector<std::vector<int>> dp(n, std::vector<int>(m, 0));
        dp[0][0] = 1;

        // Fill dp table
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    dp[i][j] = 0;  // Blocked cell
                } else {
                    if (i > 0) dp[i][j] += dp[i - 1][j];
                    if (j > 0) dp[i][j] += dp[i][j - 1];
                }
            }
        }

        return dp[n - 1][m - 1];
    }
};
