class Solution {
public:
    bool fun(char a, char b){
        return (a == '(' && b == ')') || (a == '{' && b == '}') ||
        (a == '[' && b == ']');
    }
    bool isValid(string s) {
        stack<int>st;
        for(auto x : s){
            if(x == '[' || x == '(' || x == '{'){
                st.push(x);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(!fun(st.top(),x)){
                    return false;
                }
                else{
                    st.pop();                    
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
