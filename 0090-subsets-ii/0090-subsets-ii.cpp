class Solution {
public:
    void ch(vector<int>& v,set<vector<int>> &st,int i,vector<int>& v1){
        if(i<0){
            // ans.push_back(v1);
            st.insert(v1);
            return ;
        }
        v1.push_back(v[i]);
        ch(v,st,i-1,v1);
        v1.pop_back();
        ch(v,st,i-1,v1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        int n=v.size();
        set<vector<int>> st;
        vector   <int> v1;
        ch(v,st,n-1,v1);
        for(auto y:st){
            ans.push_back(y);
        }
        return ans;
    }
};