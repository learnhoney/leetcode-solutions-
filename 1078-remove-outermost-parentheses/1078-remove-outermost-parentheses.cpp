class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int left=0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='('){
                if(left>0){
                    res+=s[i];
                }
                left++;
            }else{
                left--;
                if(left>0){
                    res+=s[i];
                }
            }
        }
        return res;
    }
};