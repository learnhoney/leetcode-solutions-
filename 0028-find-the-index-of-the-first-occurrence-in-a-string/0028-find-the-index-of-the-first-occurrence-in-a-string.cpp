class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenh = haystack.length();
        int lenn = needle.length();
        int j = 0;

        for(int i = 0; i < lenh; i++){
            if(haystack[i] == needle[j]){
                j++;
            }else{
                i = i - j;
                j = 0;
            }

            if(j == lenn){
                return i - lenn + 1; //if needle length over return the i start idx 
            }
        }

        return -1;
    }
};