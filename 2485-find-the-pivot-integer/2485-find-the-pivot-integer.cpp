class Solution {
public:
    int pivotInteger(int n) {
        int s=n*(n+1)/2;
        int s1=0;
        for(int i=1;i<=n;i++){
            s1+=i;
            // cout<<s1<<" "<<s<<" ";
            if(s1==s) return i;
            s-=i;
        }
        return -1;
    }
};