class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int left=0, totsum=accumulate(nums.begin(), nums.end(),0);
        for(int i=0;i<n;i++){
            totsum-=nums[i];
            
            ans[i]=abs(left-totsum);
            left+=nums[i];
        }
        return ans;
    }
};