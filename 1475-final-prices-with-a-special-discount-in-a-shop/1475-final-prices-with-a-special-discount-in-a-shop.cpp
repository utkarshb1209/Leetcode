class Solution {
public:
    vector<int> finalPrices(vector<int>& v) {
        int n=v.size();
        int y;
        vector<int> ans;
        for(int i=0;i<n;i++){
            y=i+1;
            while(y<n && v[i]<v[y]){
                y++;
            }
            if(y!=n)
            ans.push_back(v[i]-v[y]);
            else ans.push_back(v[i]);
        }
        return ans;
    }
};