class Solution {
public:
    int solve (int index, vector<int> & heights, int k, vector<int> &dp){
        if (index == 0) return 0;

        if (dp[index] != -1) return dp[index];

        int ans = INT_MAX;
        for (int i = 1; i<= k; i++){
            if(index - i >= 0){
                ans = min(ans, solve(index - i, heights, k, dp) + abs(heights[index] - heights[index - i]));
            }
        }
        return dp[index] = ans;
    }
    int frogJump(vector<int>& heights, int k) {
        int n = heights.size();
        vector<int> dp (n, -1);
        return solve(n-1, heights, k, dp);
        
    }
};
