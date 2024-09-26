class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> res;
        unordered_map<char, char> maps;
        unordered_map<char, char> mapt;

        for(int i=0; i<s.size(); ++i){
            char chars=s[i];
            char chart=t[i];

            if(maps.find(chars)!=maps.end()){
                if(maps[chars]!=chart){
                    return false;
                }
            }else{
                if(mapt.find(chart)!=mapt.end()){
                    return false;
                }

                maps[chars]=chart;
                mapt[chart]=chars;
            }
        }            
        return true;
    }
};