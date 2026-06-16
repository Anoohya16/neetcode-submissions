class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        int n=speed.size();
        for(int i=0;i<n;i++){
            cars.push_back({position[i],speed[i]});
        }
        stack<float>st;
        sort(cars.begin(),cars.end());
        for(int i=n-1;i>=0;i--){
            float time=(float)(target-cars[i].first)/cars[i].second;
                if(st.empty()||time>st.top()){
                    st.push(time);
                }
        }
        return st.size();
    }
};