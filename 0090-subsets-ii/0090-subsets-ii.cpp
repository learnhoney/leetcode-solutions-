class Solution {
public:

    void backtrack(vector<vector<int>> &s, vector<int>& nums, vector<int>& cur, int i){
        s.push_back(cur);
           
        for(int j = i; j<nums.size(); j++){
            if(j > i && nums[j] == nums[j-1]){
                continue;
            }
        

        cur.push_back(nums[j]);
        backtrack(s,nums,cur,j+1);
        
        cur.pop_back();
        }
    
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> s;
        vector<int>cur;
        
        sort(nums.begin(), nums.end());

        backtrack(s, nums, cur, 0);
        return s;
    }
};