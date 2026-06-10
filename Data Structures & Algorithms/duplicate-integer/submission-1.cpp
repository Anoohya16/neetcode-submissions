class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int l=0;
        int r=1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[l]==nums[r]){
               return true;
            }
            l++;
            r++;
        }
        return false;
    }
};