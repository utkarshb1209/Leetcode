class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int n=v.size();
        int i=n-2;
        while(i>=0){
            if(v[i]<v[i+1]){
                break;
            }
            i--;
        }
        if(i<0) {
            reverse(v.begin(),v.end());
            return;
        }
        else{
            int j=n-1;
            while(j>i){
                if(v[j]>v[i]){
                    swap(v[i],v[j]);
                    break;
                }
                j--;
            }
            reverse(v.begin()+i+1,v.end());
        }
    }
};