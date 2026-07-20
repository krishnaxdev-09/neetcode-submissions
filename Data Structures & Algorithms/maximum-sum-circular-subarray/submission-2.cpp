class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        int curr1 = nums[0], res = nums[0], curr2 = nums[0];
        int maxSum = nums[0], minSum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            curr1 = max(curr1 + nums[i], nums[i]);
            maxSum = max(maxSum,curr1);
            curr2 = min(curr2 + nums[i], nums[i]);
            minSum = min(minSum,curr2);
        }
        if(maxSum < 0) return maxSum;
        res = max(res,max(maxSum,sum-minSum));
        return res;
    }
};