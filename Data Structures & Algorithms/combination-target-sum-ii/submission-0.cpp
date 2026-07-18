class Solution {
public:
    void fun(vector<int>&nums,int i, int sum , int target, vector<int>&dairy, vector<vector<int>>&ans){
        if(i == nums.size()){
            if(sum == target){
                ans.push_back(dairy);
            }
            return;
        }
        if(sum + nums[i] <= target){
            dairy.push_back(nums[i]);
            fun(nums,i+1,sum + nums[i],target,dairy,ans);
            dairy.pop_back();
        }
        int j = i;
        while(j + 1 < nums.size() && nums[j] == nums[j+1]){
            j++;
        }
        fun(nums,j+1,sum,target,dairy,ans);
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>dairy;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        fun(nums,0,0,target,dairy,ans);
        return ans;
    }
};
