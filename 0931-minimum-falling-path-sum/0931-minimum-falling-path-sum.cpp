class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& v) {
        // vector<vector<int>> v1;
        // v1=v;
        int i,j,mn=INT_MAX;
        int n=v.size();
        for(i=1;i<n;i++){
            for(j=0;j<n;j++){
                if(j==0){
                    v[i][j]+=min(v[i-1][j],v[i-1][j+1]);
                }
                else if(j==n-1){
                    v[i][j]+=min(v[i-1][j],v[i-1][j-1]);
                }
                else {
                    v[i][j]+=min(min(v[i-1][j],v[i-1][j+1]),v[i-1][j-1]);
                }
            }
        }
        for(i=0;i<n;i++){
            mn=min(mn,v[n-1][i]);
        }
        return mn;
    }
};