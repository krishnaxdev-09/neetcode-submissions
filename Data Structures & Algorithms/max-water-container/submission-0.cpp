class Solution {
public:
    int maxArea(vector<int>& nums) {
        int res = 0;
        int i = 0, j = nums.size()-1;
        while(i < j){
            int width = j - i;
            int height = min(nums[i],nums[j]);
            int area = width * height;
            res = max(res,area);
            if(nums[i] < nums[j]) i++;
            else j--;
        }
        return res;
    }
};
