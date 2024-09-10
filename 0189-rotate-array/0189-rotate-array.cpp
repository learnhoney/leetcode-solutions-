class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(k%n == 0){}
        //do nothing
        else if(n!=1 && k%n!=0)
        {
            k=k%n;
            vector<int> temp;
            int i = n-k;
            while(k>0)
            {
                temp.push_back(nums[i]);
                i++;
                k--;
            }
            for(int j=0;j<n-k;j++)
            {
                temp.push_back(nums[j]);
            }
            for(int j=0;j<nums.size();j++)
            {
                nums[j] = temp[j];
            }
        }
    }
};