class Solution {
public:
    int sum(vector<int> &nums, int div){
        int res=0;
        for(int i=0; i<nums.size(); i++){
            double elem= nums[i];
            res+=ceil(elem/div);
        }
        return res;
    }

    int smallestDivisor(vector<int>& nums, int k) {
        int low=1, high= *max_element(nums.begin(), nums.end());
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(sum(nums, mid)<=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};