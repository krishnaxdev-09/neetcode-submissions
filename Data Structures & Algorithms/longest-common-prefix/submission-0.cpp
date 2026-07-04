class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        int k = 0;
        while(k < strs.size()){
            string a = strs[k];
            int count = 0;
            for(int i = 0,j = 0; i < s.size() && j < a.size(); i++, j++){
                if(s[i] == a[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            s = s.substr(0,count);
            k++;
        }
        return s;
    }
};