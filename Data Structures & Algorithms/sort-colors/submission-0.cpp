class Solution {
public:
    void merge_sort(vector<int>& nums,int start,int mid,int end){
        int i=start;
        int j=mid+1;
        vector<int> temp;
        while(i<=mid && j<=end){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            temp.push_back(nums[i++]);
        }
        while(j<=end){
            temp.push_back(nums[j++]);
        }
        for(int k=start;k<=end;k++){
            nums[k]=temp[k-start];
        }
    }
    void merge(vector<int>& nums,int start,int end){
        if(start>=end) return;
        int mid;
        mid=start+(end-start)/2;
        merge(nums,start,mid);
        merge(nums,mid+1,end);
        merge_sort(nums,start,mid,end);
    }
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        merge(nums,0,n-1);
    }
};