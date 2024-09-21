class Solution {
public:

    int count(std::vector<int>& nums, int cap, int k) {
        int splitcnt = 1, sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > cap) {
                sum = nums[i];
                splitcnt++;
            } else {
                sum += nums[i];
            }
        }
        return splitcnt;
    }

    int splitArray(std::vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        
        while (low <= high) {
            int mid = (low + high) / 2;
            if (count(nums, mid, k) <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};
