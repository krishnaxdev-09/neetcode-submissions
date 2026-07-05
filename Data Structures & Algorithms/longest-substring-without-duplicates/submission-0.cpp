class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int low = 0, high = 0;
        int res = 0;
        while(high < s.size()){
            mp[s[high]]++;
            int len = high-low+1;
            while(mp.size() < len){
                mp[s[low]]--;
                if(mp[s[low]] == 0){
                    mp.erase(s[low]);
                }
                low++;
                len = high - low + 1;
            }
            int a = high - low + 1;
            res = max(res,a);
            high++;
        }
        return res;
    }
};
