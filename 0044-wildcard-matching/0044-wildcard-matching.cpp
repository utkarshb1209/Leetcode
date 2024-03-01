class Solution {
public:
    int op(int i,int j,string &s,string &p,vector<vector<int>>& dp){
        if(i<0 && j<0) return true;
        if(j<0) return false;
        if(i<0){
            for(int ii=0;ii<=j;ii++){
                if(p[ii]!='*') return false;
            }
            return true;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==p[j] || p[j]=='?') return dp[i][j]=op(i-1,j-1,s,p,dp);
        else if(p[j]=='*') return dp[i][j]=op(i-1,j,s,p,dp)||op(i,j-1,s,p,dp);
        else return dp[i][j]= false;
    }
    bool isMatch(string s, string p) {
        int m=s.size();int n=p.size();
        vector<vector<int>>dp(m,vector<int> (n,-1));
        return op(m-1,n-1,s,p,dp);
    }
};