class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();

        if(n==0){
            return 0;
        }

        int longest=INT_MIN;
        unordered_set<int> set;
        for(int i=0; i<n ;i++){
             set.insert(nums[i]);
        }
        for(auto it: set){
            if(set.find(it-1)==set.end()){
                int currlong=it;
                int curr=1;
                while(set.find(currlong+1)!=set.end()){
                    currlong++;
                    curr++;
                }
                longest=max(longest, curr);
            }
        }
        return longest;

    }
};