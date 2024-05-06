class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int m=v.size();
        int n=v[0].size();
        int h=m*n-1,l=0;
        while(l<=h){
            int mid=(h+l)/2;
            if(v[mid/n][mid%n]==t) return 1;
            else if(v[mid/n][mid%n]>t){
                h=mid-1;
            }
            else l=mid+1;
        }
        return 0;
    }
};