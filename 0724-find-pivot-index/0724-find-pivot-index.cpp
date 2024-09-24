class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefix=0;
        int totsum=0;
        for(int i=0; i<nums.size(); i++){
            totsum+=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            
            if(prefix==totsum-prefix-nums[i]) return i;
            prefix+=nums[i];

        }
        return -1;
    }
};