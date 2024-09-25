class Solution {
public:


    bool bs(int size, vector<int>& nums, int k){
        int sum=0, i=0, j=0;
        int maxx=INT_MIN;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
            if(j-i+1==size){
                maxx=max(sum,maxx);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if (maxx>=k) return true;
        return false;
    }

    int minSubArrayLen(int k, vector<int>& nums) {
        int low=1, high=nums.size(), mn=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(bs(mid,nums,k)){
                mn=mid;
                high=mid-1;
            }else{ low=mid+1;}
        }
        return mn; 
    }
};