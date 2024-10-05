class Solution {
private:
    void helper(string digit, string res, int i, vector<string>& ans, string mapping[]){
        if (i >= digit.length()) {
            ans.push_back(res);
            return;
        }

        int num = digit[i] - '0';
        string value = mapping[num];

        for (int j = 0; j < value.length(); j++) {
            res.push_back(value[j]);
            helper(digit, res, i + 1, ans, mapping);
            
            res.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digit) {
        vector<string> ans;
        if (digit.length() == 0) {
            return ans;
        }

        int i = 0;
        string res;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        helper(digit, res, i, ans, mapping);
        return ans;
    }
};