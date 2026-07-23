class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(auto x : nums){
            mp[x]++;
        }
        vector<int>ans;
        int a = n / 3;
        for(auto& p : mp){
            if(p.second > a){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};