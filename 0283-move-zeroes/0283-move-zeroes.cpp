class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int f=0;
        for(int s=0; s<nums.size(); s++){
            if(nums[s] !=0){
                swap(nums[s], nums[f]);
                f++;
            }
        }
    }
};