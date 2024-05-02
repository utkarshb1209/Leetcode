class Solution {
public:
        int fn(vector<int>& v, int t,vector<vector<int>> & dp, int i){
        if(i==0){
            if(t%v[0]==0) return 1;
            return 0;
        }
        int tk=0,nt;
        if(dp[i][t]!=-1) return dp[i][t];
        if(t>=v[i]){
            tk=fn(v,t-v[i],dp,i);
        }
        nt=fn(v,t,dp,i-1);
        return dp[i][t]=tk+nt;
    }
    int change(int t, vector<int>& v) {
        int n=v.size();
        vector<vector<int>> dp(n,vector<int> (t+1,-1));
        int x=fn(v,t,dp,n-1);
        return x;
    }
};