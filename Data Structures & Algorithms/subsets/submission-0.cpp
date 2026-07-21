class Solution {
public:
    void fun(vector<vector<int>>&ans, int n, int idx, vector<int>&temp,vector<int>nums){
        if(idx == n){
            ans.push_back(temp);
            return;
        }
        fun(ans,n,idx+1,temp,nums);
        temp.push_back(nums[idx]);
        fun(ans,n,idx+1,temp,nums);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int idx = 0, n = nums.size();
        fun(ans,n,idx,temp,nums);
        return ans;
    }
};