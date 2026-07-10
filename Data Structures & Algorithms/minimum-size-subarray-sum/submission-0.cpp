class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int low = 0, high = 0;
        int sum = 0;
        while(high < nums.size()){
            sum += nums[high];
            while(sum >= target){
                int len = high - low + 1;
                res = min(len,res);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        if(res == INT_MAX) return 0;
        return res;
    }
};