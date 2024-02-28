class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++){
            if(v[abs(v[i])-1]<0) return abs(v[i]);
            v[abs(v[i])-1]*=-1;
        }
        return 0;
    }
};