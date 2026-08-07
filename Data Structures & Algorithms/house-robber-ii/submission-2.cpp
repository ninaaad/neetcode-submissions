class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        return max(solve(nums, 0, n-2), solve(nums, 1, n-1));
    }

    int solve(vector<int> &nums, int startInd, int endInd){

        int len = endInd - startInd + 1;
        if (len == 1) return nums[startInd];
        vector<int> dp(len);

        dp[0] = nums[startInd];
        dp[1] = max(nums[startInd], nums[startInd + 1]);

        for (int i = 2; i < len; i++){
            dp[i] = max(dp[i-1], nums[startInd + i] + dp[i - 2]);
        }


        return dp[len - 1];
    }
};
