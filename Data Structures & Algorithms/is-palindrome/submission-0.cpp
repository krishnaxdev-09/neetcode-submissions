class Solution {
public:
    bool fun(char a){
        return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') ||
        (a >= '0' && a <= '9');
    }
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(fun(s[i])){
                temp += tolower(s[i]);
            }
        }
        string temp2 = temp;
        reverse(temp2.begin(),temp2.end());
        return temp == temp2;
    }
};
