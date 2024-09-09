class Solution {
public:
    void ch(vector<vector<int>>& vis, vector<vector<char>>& v, int n,int m,int i,int j){
        if(i<0 || j<0 || i==m || j==n || vis[i][j]==1 || v[i][j]=='0'){
            return;
        }
        vis[i][j]=1;
        ch(vis,v,n,m,i+1,j);
        ch(vis,v,n,m,i,j+1);
        ch(vis,v,n,m,i,j-1);
        ch(vis,v,n,m,i-1,j);
    }
    int numIslands(vector<vector<char>>& v) {
        int m=v.size();
        int n=v[0].size();
        int ans=0;
        vector<vector<int> > vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && v[i][j]=='1'){
                    ans++;
                    ch(vis,v,n,m,i,j);
                }
            }
        }
        return ans;
    }
};