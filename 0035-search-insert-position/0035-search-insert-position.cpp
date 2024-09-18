class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int n= nums.size();
        int low=0, high=n-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>k){
                high=mid-1;
                }else if(nums[mid]<k){
                    low=mid+1;
                    }else{
                        return mid;
                        }
        }
        return low;
    }
};