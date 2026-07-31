class Solution {
public:
    int fun(vector<int>&nums, int i ,int free, bool b, int n, vector<vector<int>>&dp){
        if(i == n-1 && b)return 0;
        if(i >= n) return 0;
        if(dp[i][free] != -1) return dp[i][free];
        if(free == 0){
            return dp[i][free] = fun(nums,i + 1, 1, b, n, dp);
        }
        int x = nums[i] + fun(nums, i + 1, 0, b, n, dp);
        int y = fun(nums, i + 1, 1, b, n, dp);

        return dp[i][free] = max(x,y);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<vector<int>>dp(n,vector<int>(2,-1));
        int case1 = nums[0] + fun(nums, 1, 0, 1, n, dp);
        vector<vector<int>>dp2(n,vector<int>(2,-1));
        int case2 = fun(nums,1,1,0,n,dp2);

        return max(case1,case2);
    }
};
