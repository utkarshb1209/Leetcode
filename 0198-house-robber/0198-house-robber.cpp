class Solution {
public:
    int fn(vector<int>& v,int n,vector<int>& dp,int i){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int tk=0;
        tk=v[i]+fn(v,n,dp,i+2);
        int nt=fn(v,n,dp,i+1);
        return dp[i]=max(tk,nt);
    }
    int rob(vector<int>& v) {
        int n=v.size();
        vector<int> dp(n,-1);
        return fn(v,n,dp,0);
        
    }
};