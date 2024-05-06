class Solution {
    public int maxSubArray(int[] v) {
        int mn=Integer.MIN_VALUE;
        int n=v.length,s=0;
        for(int i=0;i<n;i++){
            s+=v[i];
            mn=Math.max(s,mn);
            if(s<0) s=0;
        }
        return mn;
    }
}