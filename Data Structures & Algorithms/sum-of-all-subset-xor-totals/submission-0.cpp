class Solution {
public:
    int fun(vector<int>&nums,int i,int total){
        if(i == nums.size()) return total;

        return fun(nums,i+1,total ^ nums[i]) + fun(nums,i+1,total);
        
    }
    int subsetXORSum(vector<int>& nums) {
        return fun(nums,0,0);
    }
};