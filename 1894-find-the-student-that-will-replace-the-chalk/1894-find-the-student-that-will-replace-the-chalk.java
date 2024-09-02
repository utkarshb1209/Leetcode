class Solution {
    public int chalkReplacer(int[] c, int k) {
        int n=c.length;
        int s=0;
        for(int i=0;i<n;i++){
            s+=c[i];
            if(s>k) return i;
        }
        k=k%s;
        for(int i=0;i<n;i++){
            if(k<c[i]) return i;
            k-=c[i];
        }
        return -12;
    }
}