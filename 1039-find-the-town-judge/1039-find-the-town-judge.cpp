class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        if (n == 1){
            return 1;
        }

        unordered_map<int,int> hm;
        for(auto a : trust){
            hm[a[0]]  = -1;
            if(hm[a[1]] != -1){
                hm[a[1]]++;
            }
       }

       for(auto i : hm){
        if(i.second == n-1){
            return i.first;
        }
       }

       return -1;
    }
};


