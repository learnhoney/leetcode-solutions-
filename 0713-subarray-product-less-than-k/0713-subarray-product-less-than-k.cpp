class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0, prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix=1;
            for(int j=i; j<nums.size();j++){
                prefix*=nums[j];
                if(prefix<k){
                    ans++;
                }else{
                    break;
                }
            }
            
        }
        return ans;
    }
};