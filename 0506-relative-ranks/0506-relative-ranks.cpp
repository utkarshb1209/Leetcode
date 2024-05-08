class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& v) {
        int n=v.size();
        vector<string> ans;
        map<int,int> m;
        for(auto q:v) m[q]=1;
        int i=n;
        for(auto q:m){
            m[q.first]=i--;
        }
        for(int j=0;j<n;j++){
            int x=m[v[j]];
            if(x==1) ans.push_back("Gold Medal");
            else if(x==2) ans.push_back("Silver Medal");
            else if(x==3) ans.push_back("Bronze Medal");
            else{
                ans.push_back(to_string(x));
            }
        }
        return ans;
    }
};