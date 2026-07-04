class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[res]){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                count = 1;
                res = i;
            }
        }
        int a = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[res]){
                a++;
            }
        }
        if(a > nums.size()/2){
            return nums[res];
        }
        return -1;
    }
};