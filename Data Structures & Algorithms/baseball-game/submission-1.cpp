class Solution {
public:
    int calPoints(vector<string>& nums) {
        stack<int>st;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == "C" && !st.empty()){
                st.pop();
            }
            else if(nums[i] == "D" && !st.empty()){
                int a = st.top() * 2;
                st.push(a);
            }
            else if(st.size() >= 2 && nums[i] == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a+b);
            }
            else{
                int a = stoi(nums[i]);
                st.push(a);
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};