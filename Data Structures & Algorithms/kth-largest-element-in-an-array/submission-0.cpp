class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() < k) return -1;
        priority_queue<int>pq(nums.begin(),nums.end());
        int ans = -1;
        for(int i = 0; i < k; i++){
            ans = pq.top();
            pq.pop();
        }
        return ans;
    }
};
