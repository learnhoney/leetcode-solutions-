class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        unordered_map<int,int> hm;
        for(auto it : edges){
            hm[it[0]]++;
            hm[it[1]]++;   
            }

        for(const auto& it : hm){
            if(it.second == n){
                return it.first;
            }
        }
        return -1;
    }
};