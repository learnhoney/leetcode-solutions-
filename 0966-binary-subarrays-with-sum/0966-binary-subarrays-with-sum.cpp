class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        return counterfun(nums,k)-counterfun(nums, k-1);
    }

    int counterfun(vector<int>& nums, int k){
        if (k<0){
            return 0; 
        }
        int r=0, l=0;
        long long sum=0;
        int count = 0;
        int n=nums.size();
        while(r<n){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
    
};