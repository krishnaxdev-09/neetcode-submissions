/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& nums) {
        sort(nums.begin(), nums.end(), [](const Interval& a, const Interval&b)           {
            return a.start < b.start;
        });
        int end = nums[0].end;
        for(int i = 1; i < nums.size(); i++){
            int start = nums[i].start;
            if(start < end){
                return false;
            }
            end = nums[i].end;
        }
        return true;
    }
};
