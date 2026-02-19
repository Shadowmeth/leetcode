#include <bits/stdc++.h>

using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[grid.size() - 1].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));

    dp[0][0] = grid[0][0];
    // fill the first column
    for (size_t i = 1; i < dp.size(); i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    // fill the first row
    for (size_t i = 1; i < dp[0].size(); i++) {
        dp[0][i] = dp[0][i - 1] + grid[0][i];
    }

    // fill the rest of the matrix
    for (size_t row = 1; row < dp.size(); row++) {
        for (size_t col = 1; col < dp[0].size(); col++) {
            dp[row][col] = grid[row][col] + min(dp[row - 1][col], dp[row][col - 1]);
        }
    }

    return dp[m - 1][n - 1];
}

int main(void)
{
    vector<vector<int>> grid;
    grid = { { 1, 3, 1 }, { 1, 5, 1 }, { 4, 2, 1 } };
    cout << minPathSum(grid) << endl;
    
    grid = { { 1, 2, 3 }, { 4, 5, 6 } };
    cout << minPathSum(grid) << endl;
}
