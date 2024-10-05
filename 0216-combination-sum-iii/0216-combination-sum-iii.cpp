class Solution {
public:

    void helper(int cnt, int k, int n, int j, int sum, vector<vector<int>>& ans, vector<int>& res){
        if(sum > n){
            return;
        }
        if(cnt == k){
            if(sum == n) ans.push_back(res);
            return;
        }
        for(int i = j; i<= 9; i++){
            res.push_back(i);
            helper(cnt + 1, k , n, i + 1, sum + i, ans, res);
            res.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> res;
        vector<vector<int>> ans;
        helper(0, k, n, 1, 0, ans, res);

        return ans;
    }
};