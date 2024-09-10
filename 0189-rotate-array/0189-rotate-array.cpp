class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(k>n){
            k=k%n;
        }

        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
    private:
    void reverse(vector<int>& nums, int st, int en) {
        for(int i=st; i<=en; i++){
            int t=nums[st];
            nums[st]=nums[en];
            nums[en]=t;
            st++;
            en--;
        }
    }
};