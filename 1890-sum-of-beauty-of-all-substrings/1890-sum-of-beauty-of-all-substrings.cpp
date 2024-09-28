class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        unordered_map<char, int> map;   //map for counting 
        int cnt=0;
        for(int i=0; i<n;i++){
            map.clear();                 //new substr so new cnting 
            for(int j=i; j<n; j++){
                map[s[j]]++;
                int min=INT_MAX;
                int max=INT_MIN;
                for( auto ch:map){
                    if(ch.second<min) min=ch.second;   //min update 
                    if(ch.second>max) max=ch.second;    //max update
                }
                cnt+=max-min;
            }
        }
        return cnt;
    }
};