class Solution {
public:
    bool fun(string s){
        int i = 0, j = s.size()-1;
        while(i < j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(fun(s)){
            return true;
        }
        for(int i = 0; i < s.size(); i++){
            string z = s.substr(0,i) + s.substr(i+1,s.size());
            if(fun(z)){
                return true;
            }
        }
        return false;
    }
};