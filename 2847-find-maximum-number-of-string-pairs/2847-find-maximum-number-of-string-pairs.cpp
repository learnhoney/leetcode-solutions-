class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> hm;
        int cnt = 0;
        for(auto w : words){
            string s = w;
            reverse(s.begin(), s.end());

            if(hm[s] > 0){
                cnt++;
                hm[s]--;
            }else{
                hm[w]++;
            }
        }
        return cnt;
    }
};