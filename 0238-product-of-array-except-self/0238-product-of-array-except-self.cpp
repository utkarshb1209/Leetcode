class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size(),i,c=0;
        long long int x=1;
        for(auto y:v) {
            if(y==0) c++;
            else{
                x*=y;
            }
        }
        if(c>1) x=0;
        for(i=0;i<n;i++){
            if(v[i]==0){
                v[i]=x;
            }
            else{
                if(c>0){
                    v[i]=0;
                }
                else
                v[i]=x/v[i];
            }
        }
        return v;
    }
};