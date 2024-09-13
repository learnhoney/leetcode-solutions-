class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxcurr=nums[0];
        int maxi=maxcurr;
        for(int i=1; i<n;i++){
            maxcurr= max(maxcurr+nums[i], nums[i]);

            maxi=max(maxi,maxcurr);
        }
        return maxi;
    }
};