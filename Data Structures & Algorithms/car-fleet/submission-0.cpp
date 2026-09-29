class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;

        for (int i = 0; i < position.size(); i++){
            cars.push_back({position[i],speed[i]});
        }

        sort(cars.rbegin(),cars.rend());

        stack<double> fleets;

        for (int j = 0; j < position.size(); j++) {
            double time = double(target - cars[j].first) / cars[j].second;

            if (fleets.empty()) {
                fleets.push(time);
            }
            else if (time > fleets.top()) {
                fleets.push(time);
            }
        }
        return fleets.size();
    }
};
