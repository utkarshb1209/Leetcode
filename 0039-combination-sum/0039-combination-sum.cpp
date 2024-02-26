class Solution {
public:
    void ch(vector<int>& v, int t,int i,set<vector<int>> &st,vector<int> &v1){
        if(t==0) {
            st.insert(v1);
            return;
        }
        if(i<0 || t<0){
            return;
        }
        if(t>=v[i]){
            v1.push_back(v[i]);
            ch(v,t-v[i],i,st,v1);
            v1.pop_back();
        }
        ch(v,t,i-1,st,v1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& v, int t) {
        int n=v.size();
        vector<vector<int>> ans;
        set<vector<int> >st;
            vector<int> v1;
        ch(v,t,n-1,st,v1);
        for(auto y:st) ans.push_back(y);
        return ans;
    }
};