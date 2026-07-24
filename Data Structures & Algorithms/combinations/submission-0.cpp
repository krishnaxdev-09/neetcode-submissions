class Solution {
public:
    void fun(int i, int c,int k, int n,vector<int>&temp, vector<vector<int>>&ans){
        if(c == k){
            ans.push_back(temp);
            return;
        }
        if(i > n){
            return;
        }
        temp.push_back(i);
        fun(i + 1, c + 1, k, n, temp, ans);
        temp.pop_back();
        fun(i + 1, c, k, n, temp, ans);
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        fun(1,0,k,n,temp,ans);
        return ans;
    }
};