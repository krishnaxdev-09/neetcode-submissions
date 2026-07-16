class Solution {
public:
    void fun(vector<int>&nums,int i,int sum,int target,vector<int>&dairy,vector<vector<int>>&ans){
        if(i == nums.size()){
            if(sum == target){
                ans.push_back(dairy);
            }
            return;
        }
        if(sum + nums[i] <= target){
            dairy.push_back(nums[i]);
            fun(nums,i,sum+nums[i],target,dairy,ans);
            dairy.pop_back();
        }
        fun(nums,i+1,sum,target,dairy,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>dairy;
        vector<vector<int>>ans;
        fun(nums,0,0,target,dairy,ans);
        return ans;
    }
};
