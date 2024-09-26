class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        string goal2= goal+goal; //concat
        return goal2.find(s)!=string:: npos; 
    }
};