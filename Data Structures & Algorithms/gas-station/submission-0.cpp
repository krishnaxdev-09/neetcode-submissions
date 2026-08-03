class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0, temp = 0, idx = 0;
        for(int i = 0; i < gas.size(); i++){
            int diff = gas[i] - cost[i];
            totalgas += diff;
            temp += diff;
            if(temp < 0){
                idx = i + 1;
                temp = 0;
            }
        }
        if(totalgas < 0) return -1;
        return idx;
    }
};
