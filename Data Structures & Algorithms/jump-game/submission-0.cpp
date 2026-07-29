class Solution {
public:
    unordered_map<int,bool>mp;
    bool fun(vector<int>&nums,int i){
        if(i == nums.size() - 1) return true;
        if(i >= nums.size()) return false;
        if(mp.find(i) != mp.end()) return mp[i];
        bool ans = 0;
        for(int j = 1; j <= nums[i]; j++){
            ans = ans || fun(nums,i + j);
            if(ans == true) return true;
        }
        mp[i] = ans;
        return ans;
    }
    bool canJump(vector<int>& nums) {
        return fun(nums,0);
    }
};
