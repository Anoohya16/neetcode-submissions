class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int,int>& b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        vector<pair<int,int>> freq(mp.begin(), mp.end());

        sort(freq.begin(), freq.end(), cmp);

        vector<int> ans;

        for(int i = 0; i < k; i++)
            ans.push_back(freq[i].first);

        return ans;
    }
};