class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(auto x : nums){
            if(!st.count(x)){
                st.insert(x);
            }
            else{
                return true;
            }
        }
        return false;
    }
};