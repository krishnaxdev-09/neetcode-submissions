class Solution {
public:
    bool isValid(vector<int>&nums,int k, int h){
        long long res = 0;
        for(int i = 0; i < nums.size(); i++){
            res += (nums[i] + k - 1 )/ k;
        }
        return res <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int end = *max_element(piles.begin(), piles.end());
        int start = 1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(isValid(piles,mid,h)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};
