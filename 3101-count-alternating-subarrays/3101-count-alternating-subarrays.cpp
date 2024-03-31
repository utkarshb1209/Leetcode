class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& v) {
        long long int n=v.size();
        long long int c=1,ans=0,i;
        for(i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                ans+=(c*(c+1))/2;
                c=1;
            }
            else c++;
        }
        ans+=(c*(c+1))/2;
        return ans;
    }
};