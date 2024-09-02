class Solution {
public:
    int chalkReplacer(vector<int>& v, int k) {
        int n=v.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=v[i];
            if(s>k) return i;
        }
        k=k%s;
        for(int i=0;i<n;i++){
            if(v[i]>k) return i;
            k-=v[i];
        }
        return -1;
    }
};