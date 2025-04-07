class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        pair p ={ edges[0][0], edges[0][1] };
        if(edges[1][0] == p.first || edges[1][1] == p.first){
            return p.first;
        }
        return p.second;
    }
}; 