class Solution {
public:
    int fun(vector<int>&nums,int i, int sum, int amt,vector<vector<int>>&dp){
        if(sum == amt){
            return 0;
        }
        if(i == nums.size()) return 100000;
        if(dp[i][sum] != -1) return dp[i][sum];
        int c1 = 100000, c2 = 100000;
        if(nums[i] < INT_MAX - sum){
            if(sum + nums[i] <= amt){
                c1 = 1 + fun(nums,i,sum + nums[i],amt,dp);
            }
        }
        c2 = fun(nums,i+1,sum,amt,dp);
        return dp[i][sum] = min(c1,c2);
    }
    int coinChange(vector<int>& nums, int amt) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(amt+1,-1));
        int ans = fun(nums,0,0,amt,dp);
        if(ans == 100000) return -1;
        return ans;
    }
};
