class Solution {
public:
    int evalRPN(vector<string>& nums) {
        stack<int>st;
        for(int i = 0; i < nums.size(); i++){
            if(st.size() >= 2 && (nums[i] == "+")){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a + b);
            }
            else if(st.size() >= 2 && (nums[i] == "-")){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a - b);
            }
            else if(st.size() >= 2 && (nums[i] == "*")){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a * b);
            }
            else if(st.size() >= 2 && (nums[i] == "/")){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(a / b);
            }
            else{
                int a = stoi(nums[i]);
                st.push(a);
            }
        }
        return st.top();
    }
};
