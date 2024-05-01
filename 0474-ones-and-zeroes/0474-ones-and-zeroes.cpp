class Solution {
public:
    int fn(vector<int> &v,int i,int m,int n,vector<string> &s,int n1,vector<vector<vector<int>>>&dp){
        if(i>=n1 || m<0 || n<0) {
            return 0;
        }
        if(dp[i][m][n]!=-1) return dp[i][m][n];
        string x=s[i];
        int y=x.size();
        int tk=0;
        if(v[i]>=0 && m>=v[i] && n>=y-v[i]){
            tk= 1+fn(v,i+1,m-v[i],n-(y-v[i]),s,n1,dp);
        }
        int nt=fn(v,i+1,m,n,s,n1,dp);
        return dp[i][m][n]=max(nt,tk);
        
    }
    int findMaxForm(vector<string>& s, int m, int n) {
        int n1=s.size(),k=0;
        vector<int> v(n1);
        vector<vector<vector<int>>>dp(n1+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        for(auto q:s){
            int o=0,z=0;
            for(int j=0;j<q.size();j++){
                if(q[j]=='1') o++;
                else z++;
            }
            if(o>n || z>m){
                v[k++]=INT_MIN;
            }
            else{
                v[k++]=z;
            }
        }
        return fn(v,0,m,n,s,n1,dp);
    }
};