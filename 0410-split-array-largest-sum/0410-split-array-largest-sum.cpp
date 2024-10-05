class Solution {
public:

    int helper(vector<int>& nums, int mid, int k){
        int splitidx = 1, sum = 0;

        for(int i = 0; i<nums.size(); i++){
            if(sum + nums[i] > mid){
                sum = nums[i];
                splitidx++;

            }else{
                sum += nums[i];
            }
        }
        return splitidx;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){
            int mid = (low + high) / 2;

            if(helper(nums, mid, k) <= k){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};