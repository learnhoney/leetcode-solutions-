class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> sol;
        sort(candidates.begin(), candidates.end());
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

        for (int j = i; j < candidates.size(); ++j) {
            if (j > i && candidates[j] == candidates[j - 1]) {
                continue;
            }
            sol.push_back(candidates[j]);
            backtrack(candidates, target, j + 1, curSum + candidates[j], sol, res);
            sol.pop_back();
        }
    }
};
