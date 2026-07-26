class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>vec;
        for(int i = 0; i < speed.size(); i++){
            vec.push_back({position[i],speed[i]});
        }
        sort(vec.begin(),vec.end(),[](pair<int,int>&a, pair<int,int>&b){
            return a.first > b.first;
        });

        int fleet = 0;
        double maxtime = 0;
        for(int i = 0; i < vec.size(); i++){
            double time = (double)(target - vec[i].first)/vec[i].second;
            if(time > maxtime){
                fleet++;
                maxtime = time;
            }
        }
        return fleet;
    }
};
