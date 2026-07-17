class Solution {
public:
    int mySqrt(int x) {
        if(x == 1 || x == 0) return x;
        int low = 0, high = x/2;
        long long y = x;
        int ans = -1;
        while(low <= high){
            long long mid = (low + high)/2;
            long long sqr = mid * mid;
            if(sqr == y){
                return mid;
            }
            else if(sqr < y){
                low = mid + 1;
                ans = mid;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};