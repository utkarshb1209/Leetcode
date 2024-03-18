class Solution {
    public int findMinArrowShots(int[][] v) {
        int n=v.length;
        Arrays.sort(v, (a, b) -> Integer.compare(a[1], b[1]));
        int x=v[0][1];
        int  ans=1;
        for(int i=1;i<n;i++){
            if(v[i][0]<=x){
                x=Math.min(x,v[i][1]);
            }
            else{
                // System.out.println(v[i][0]);
                x=v[i][1];
                
                ans++;
            }
        }
        return ans;
    }
}