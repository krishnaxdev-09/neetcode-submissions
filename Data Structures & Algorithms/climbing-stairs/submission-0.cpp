class Solution {
public:
    unordered_map<int,int>mp;
    int fun(int i,int n){
        if(i == n){
            return 1;
        }
        if(i > n){
            return 0;
        }
        if(mp.find(i) != mp.end()){
            return mp[i];
        }
        int c1 = fun(i+1, n);
        int c2 = fun(i+2, n);

        return mp[i] = c1 + c2;
    }
    int climbStairs(int n) {
        return fun(0,n);
    }
};
