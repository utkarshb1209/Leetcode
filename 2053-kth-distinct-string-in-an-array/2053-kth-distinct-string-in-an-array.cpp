class Solution {
public:
    string kthDistinct(vector<string>& v, int k) {
        map<string,int> m;
        string ans;
        for(auto q:v) m[q]++;
        for(int i=0;i<v.size();i++){
            if(m[v[i]]==1) k--;
            if(!k){
                ans=v[i];
                return ans;
            }
        }
        return ans;
    }
};