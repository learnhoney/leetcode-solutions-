class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
        int n= nums.size();
        int low=0, high=n-1;
        vector<int> ans(2,-1);
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>k){
                high=mid-1;
                }else if(nums[mid]<k){
                    low=mid+1;
                    }else{
                        int left=mid;
                        int right=mid;
                        while(left>0 && nums[left-1]==k){
                            left--;
                        }
                        while(right<n-1 && nums[right+1]==k){
                            right++;
                        }
                        ans[0]=left;
                        ans[1]=right;
                        return ans;
                        }
        }
        return ans;
    }
    
};