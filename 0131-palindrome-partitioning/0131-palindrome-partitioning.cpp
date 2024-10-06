class Solution {
public:


    bool ispal(string s, int start, int end){
        while(start < end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void solver(int i, vector<string>& helper, vector<vector<string>>& res, string s){
        if(i >= s.size()){
            res.push_back(helper);
            return;
        }

        for(int j = i; j < s.size(); j++){
            if(ispal(s, i, j)){
                helper.push_back(s.substr(i, j - i + 1));    //adding a num of elems in substr
                solver(j + 1, helper, res, s);

                helper.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        vector<string> helper;
        vector<vector<string>> res;
        solver(0, helper, res, s);

        return res;
    }
};