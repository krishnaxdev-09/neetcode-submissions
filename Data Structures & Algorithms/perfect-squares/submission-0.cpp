class Solution {
public:
    int fun(vector<int>&nums,int i,int n,int sum,vector<vector<int>>&dp){ 
        if(sum == n){
                return 0;
        }
        if(i == nums.size()){
            return INT_MAX;
        }
        if(dp[i][sum] != -1){
            return dp[i][sum];
        }
        int c1 = n, c2 = n;
        if(sum + nums[i]*nums[i] <= n){
            c1 = 1 + fun(nums,i,n,sum + nums[i]*nums[i],dp);
        }
        c2 = fun(nums,i+1,n,sum,dp);
        return dp[i][sum] = min(c1,c2);
    }
    int numSquares(int n) {
        vector<int>nums;
        for(int i = 1; i * i <= n; i++){
            nums.push_back(i);
        }
        int a = nums.size();
        vector<vector<int>>dp(a,vector<int>(n+1,-1));
        return fun(nums,0,n,0,dp);
    }
};