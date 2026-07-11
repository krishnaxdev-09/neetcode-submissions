class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int>st;
        int n = nums.size()-1;
        st.push(n);
        vector<int>vec;
        vec.push_back(0);
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            int idx = st.empty() ? 0 : (st.top() - i);
            vec.push_back(idx);
            st.push(i);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};
