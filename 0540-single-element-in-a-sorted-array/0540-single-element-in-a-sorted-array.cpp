class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        if (n==1) return nums[0];                   //only elem
        if (nums[0]!=nums[1]) return nums[0];       //first elem
        if (nums[n-1]!=nums[n-2]) return nums[n-1]; //last elem 

        int low=1, high=n-2;
        while (low<=high) {
            int mid=(low+high)/2;

            if (nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) {
                return nums[mid];
                }

            if ((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])) {
                low = mid+1;
                }else{
                    high = mid-1;
                    }
                }

        return -1;

    }
};