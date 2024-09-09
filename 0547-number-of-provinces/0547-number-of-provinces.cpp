class Solution {
public:
    void ch(vector<int> &vis,vector<vector<int>>&adj,int n,int i){
        vis[i]=1; // 0 1 0 1 
        for(auto q:adj[i]){
            if(vis[q]==0){
                ch(vis,adj,n,q);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& v) {
        int n=v.size();
        int ans=0;
        vector<vector<int>> adj(n,vector<int>(n,0));
        vector<int> vis(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ch(vis,adj,n,i);
                ans++;
            }
        }
        return ans;
    }
};