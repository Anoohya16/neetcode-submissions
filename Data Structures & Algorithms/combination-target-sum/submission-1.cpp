class Solution {
public:
    vector<vector<int>> list;
    void solve(int idx,vector<int>& candidates,int target,vector<int> curr){
         if(target==0){
            list.push_back(curr);
            return;
        }
        if(target<0 || idx>=candidates.size()){
            return;
        }
        curr.push_back(candidates[idx]);
        solve(idx,candidates,target-candidates[idx],curr);
        curr.pop_back();
        solve(idx+1,candidates,target,curr);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>curr;
        solve(0,candidates,target,curr);
        return list;
    }
};