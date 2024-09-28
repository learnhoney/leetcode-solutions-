class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1){
            return s;
        }
        auto expandcenter=[&](int left,int right){
            while(left>=0 && right<s.length() && s[left]==s[right]){
                left--;
                right++;
            }
            return s.substr(left+1, right-left-1);
        };
        string maxs=s.substr(0,1);
        for(int i=0; i<s.length()-1; i++){
            string odd=expandcenter(i,i);
            string even=expandcenter(i,i+1);
            if(odd.length()>maxs.length()){
                maxs=odd;
            }
            if(even.length()>maxs.length()){
                maxs=even;
            }
        }
        return maxs;
    }
};