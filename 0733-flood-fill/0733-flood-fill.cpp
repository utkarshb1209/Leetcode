class Solution {
public:
    void ch(vector<vector<int>>& v, int a, int b, int m, int n, int c, int x,vector<vector<int>>& vis){
        if( a<0 || b<0 || a==m || b==n || v[a][b]!=x || vis[a][b]==1){
            return;
        }
        v[a][b]=c;
        vis[a][b]=1;
        ch(v,a+1,b,m,n,c,x,vis);
        ch(v,a-1,b,m,n,c,x,vis);
        ch(v,a,b+1,m,n,c,x,vis);
        ch(v,a,b-1,m,n,c,x,vis);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& v, int a, int b, int c) {
        // if(v[a][b]==0) return v;
        int x=v[a][b];
        int m=v.size();
        int n=v[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        
        ch(v,a,b,m,n,c,x,vis);
        return v;
    }
};