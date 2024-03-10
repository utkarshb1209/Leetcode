class Solution {
    public long maximumHappinessSum(int[] h, int k) {
        Arrays.sort(h);
        int n=h.length;
        int c=0,i;
        long ans=0;
        for(i=n-1;i>=0;i--){
            if(k==0) break;
            if(h[i]-c>0)
            ans+=h[i]-c;
            // System.out.print(h[i]-c + " ");
            c++;
            k--;
        }
        return ans;
    }
}