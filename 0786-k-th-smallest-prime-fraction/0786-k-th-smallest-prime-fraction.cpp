class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& v, int k) {
        int n=v.size();
        vector<pair<double,pair<int,int>>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    double r=(double)v[i]/v[j];
                    q.push_back({r,{v[i],v[j]}});
                }
                
            }
        }
        sort(q.begin(),q.end());
        vector<int> ans(2);
        // for(auto qq:q) cout<<qq.first<<" ";
        ans[0]=q[k-1].second.first;
         ans[1]=q[k-1].second.second;
        return ans;
    }
};