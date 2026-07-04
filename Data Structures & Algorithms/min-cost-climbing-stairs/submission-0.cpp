class Solution {
public:
    unordered_map<int,int>dp;
    int fun(vector<int>&nums ,int i, int n){
        if(i == n){
            return 0;
        }
        if(dp.find(i) != dp.end()){
            return dp[i];
        }
        int c1 = 1000, c2 = 1000;
        if(i + 1 <= n){
            c1 = nums[i] + fun(nums,i+1,n);
        }
        if(i + 2 <= n){
            c2 = nums[i] + fun(nums,i+2,n);
        }
        return dp[i] = min(c1,c2);
    }
    int minCostClimbingStairs(vector<int>& nums) {
        int n = nums.size();
        int c1 = fun(nums,0,n);
        int c2 = fun(nums,1,n);

        return min(c1,c2);
    }
};
