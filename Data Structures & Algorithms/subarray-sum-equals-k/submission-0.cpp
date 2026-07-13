class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int high = 0;
        int ans = 0;
        mp[0] = 1;
        int sum = 0;
        while(high < nums.size()){
            sum += nums[high];
            int q = sum - k;
            if(mp.find(q) != mp.end()){
                ans += mp[q];

            }
            mp[sum]++;
            high++;
        }
        return ans;
    }
};