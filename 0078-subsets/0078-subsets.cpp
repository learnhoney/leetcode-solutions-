class Solution {
public:
    void backtrack(vector<vector<int>> &s,vector<int>& nums,vector<int>&cur, int i){
        if(i>=nums.size()){
            s.push_back(cur);
            return;
            }

        cur.push_back(nums[i]);
        backtrack(s,nums,cur,i+1);
        
        cur.pop_back();
        backtrack(s,nums,cur,i+1);
    
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> s;
        vector<int>cur;
        backtrack(s,nums,cur,0);
        return s;
    }
};