class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=nums[0];
        int count=0;
        for(int x:nums){
            if(count==0) el=x;
            if(x==el){count++;}
            else {count--;}
        }
        return el;
    }
};