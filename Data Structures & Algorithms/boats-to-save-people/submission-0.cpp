class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size()-1;
        int count1 = 0, count2 = 0;
        while(i <= j){
            if(nums[i] + nums[j] <= limit){
                count1++;
                i++;
                j--;
            }
            else{
                count2++;
                j--;
            }
        }
        return count1 + count2;
    }
};