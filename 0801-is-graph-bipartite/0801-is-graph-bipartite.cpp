class Solution {
public:
    
    bool dfs(int u,int colr,vector<int>&vis,vector<int>&color,vector<vector<int>>& A)
    {
        vis[u]=1;
        color[u]=colr;

        for(auto& v:A[u])
        {
            if(!vis[v]){
                if (dfs(v, !colr, vis, color, A) == false) return false;
            }
            else if(color[v]==color[u]) return 0;
        }

        return 1;
    }

public:
    bool isBipartite(vector<vector<int>>& A) {
        int n=A.size();

        vector<int>vis(n,0),color(n,-1);

        for(int i=0;i<n;i++)
            if(!vis[i]) {
                if(!dfs(i,0,vis,color,A))return 0;
            }
        return 1;
    }
};