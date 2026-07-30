class Solution {
public:
    unordered_map<int,int>mp;
    int fun(vector<int>&nums, int i){
        if(i == nums.size() - 1) return 0;
        if(i >= nums.size()) return 10000;
        if(mp.find(i) != mp.end()) return mp[i];
        int ans = 10000;
        for(int j = 1; j <= nums[i]; j++){
            ans = min(ans, 1 + fun(nums,i + j));
        }
        mp[i] = ans;
        return ans;
    }
    int jump(vector<int>& nums) {
        return fun(nums,0);
    }
};
