class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
         n=n/2;
        for(auto s:mp){
            if(s.second>n){
                return s.first;
            }
        }
    }
};