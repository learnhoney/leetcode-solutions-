class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;

        int count = 0;
        int maxL = 0;

        for(int i = 0; i < s.length(); i++){
            while(set.find(s[i]) != set.end()){   //exists in set 
                set.erase(s[count]);
                count++;
            }

            set.insert(s[i]);

            maxL = max(maxL, i - count + 1);
        }

        return maxL;

    }
};