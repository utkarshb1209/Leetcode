class Solution {
public:
    // 1,6 2,8,  7,12 10,16
    int findMinArrowShots(vector<vector<int>>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int i,c=1;
        vector<int> v1(2);
        v1[0]=v[0][1];
        for(i=1;i<n;i++){
            if(v[i][0]<=v1[0]){
                v1[0]=min(v[i][1],v1[0]);
            }
            else{
                c++;
                v1[0]=v[i][1];
            }
        }
        return c;
    }
};