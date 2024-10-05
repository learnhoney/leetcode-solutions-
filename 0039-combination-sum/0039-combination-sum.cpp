class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> sol;
        backtrack(candidates, target, 0, 0, sol, res);
        return res;
    }

private:
    void backtrack(vector<int>& candidates, int target, int i, int curSum, vector<int>& sol, vector<vector<int>>& res) {
        if (curSum == target) {
            res.push_back(sol);
            return;
        }
        if (curSum > target || i == candidates.size()) {
            return;
        }
  
        sol.push_back(candidates[i]);
        backtrack(candidates, target, i, curSum + candidates[i], sol, res); //pick
        sol.pop_back();

        backtrack(candidates, target, i + 1, curSum, sol, res); //not pick
    }
};