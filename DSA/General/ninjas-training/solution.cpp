class Solution {
public:
    int solve(int day, int last, vector<vector<int>>& matrix,
              vector<vector<int>>& dp) {

        if (day == 0) {
            int maxi = 0;

            for (int task = 0; task < 3; task++) {
                if (task != last)
                    maxi = max(maxi, matrix[0][task]);
            }

            return maxi;
        }

        if (dp[day][last] != -1)
            return dp[day][last];

        int maxi = 0;

        for (int task = 0; task < 3; task++) {
            if (task != last) {
                int merit = matrix[day][task] +
                            solve(day - 1, task, matrix, dp);

                maxi = max(maxi, merit);
            }
        }

        return dp[day][last] = maxi;
    }

    int ninjaTraining(vector<vector<int>>& matrix) {

        int n = matrix.size();

        vector<vector<int>> dp(n, vector<int>(4, -1));

        return solve(n - 1, 3, matrix, dp);
    }
};