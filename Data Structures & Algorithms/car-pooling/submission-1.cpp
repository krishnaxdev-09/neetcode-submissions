class Solution {
public:
    bool carPooling(vector<vector<int>>& nums, int capacity) {
        sort(nums.begin(),nums.end(),[](vector<int>&a, vector<int>&b){
            if(a[1] == b[1]){
                return a[2] < b[2];
            }
            return a[1] < b[1];
        });
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>hp;
        int pass = 0;
        for(int i = 0; i < nums.size(); i++){
            int ipass = nums[i][0], start = nums[i][1], end = nums[i][2];
            while(!hp.empty() && hp.top().first <= start){
                pass -= hp.top().second;
                hp.pop();
            }
            pass += ipass;
            if(capacity < pass){
                return false;
            }
            hp.push({end,ipass});
        }
        return true;
    }
};