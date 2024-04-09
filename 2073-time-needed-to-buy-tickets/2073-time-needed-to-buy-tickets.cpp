class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        int n=v.size(); // 3 4 1 1 
        int ans=0,i;
        int x=v[k];
        for(i=0;i<n;i++){
            if(i>k){
                ans+=min(v[k]-1,v[i]);
            }
            else ans+=min(v[k],v[i]);
        }
        return ans;
    }
};