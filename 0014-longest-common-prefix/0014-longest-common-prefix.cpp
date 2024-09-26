class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());       //sort based on chars like in dictionary not size
        int n=strs.size();
        string first=strs[0], last=strs[n-1];

        for(int i=0; i<min(first.size(), last.size()); i++){ //min taken for smallest size "common"
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};