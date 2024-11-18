class Solution {
public:
    int countValidSelections(vector<int>& v) {
        int n=v.size(),ans=0,k=0,s=0;
        for(int i=0;i<n;i++){
            s+=v[i];
        }
        for(int i=0;i<n;i++){
            s-=v[i];
            k+=v[i];
            if(v[i]==0){
                if(k==s){
                    ans+=2;
                }
                else if(abs(k-s)==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};