class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=1, currcount=0;
        int n=nums.size();
        int lastelement=INT_MIN;
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]-1==lastelement){
                currcount++;
            }else if(nums[i]==lastelement){
                continue;
            }else{
                currcount=1;
            }
        lastelement=nums[i];
        longest=max(longest, currcount);
        }
        return longest;
    }
};