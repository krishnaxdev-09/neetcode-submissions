class Solution {
public:
    int fun(vector<int>&nums,int i , int sum , int target, vector<vector<int>>&dp){
        if(i == nums.size()){
            return sum == target;
        }
        if(sum > target){
            return 0;
        }
        if(dp[i][sum] != -1) return dp[i][sum];
        int a = fun(nums,i + 1, sum + nums[i], target, dp);
        int b = fun(nums,i + 1, sum, target, dp);
        
        return dp[i][sum] = a + b;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int tsum = 0;
        for(int i = 0; i < nums.size(); i++){
            tsum += nums[i];
        }
        if(tsum < target) return 0;
        if((tsum + target) % 2 == 1) return 0;
        int a = (tsum + target) / 2;
        int b = abs(a);
        vector<vector<int>>dp(nums.size(),vector<int>(b + 1, -1));
        return fun(nums,0,0,a,dp);
    }
};
