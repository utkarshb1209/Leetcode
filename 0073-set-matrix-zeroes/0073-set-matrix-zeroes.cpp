class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n=v.size(),i,j;
        int m=v[0].size();
        vector<int> v1(n,0);
        vector<int> v2(m,0);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(v[i][j]==0) {
                    v1[i]=1;
                    v2[j]=1;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(v1[i] || v2[j]) {
                    v[i][j]=0;
                    // v2[j]=1;
                }
            }
        }
    }
};