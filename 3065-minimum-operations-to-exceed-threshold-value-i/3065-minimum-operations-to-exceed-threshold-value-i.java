class Solution {
    public int minOperations(int[] v, int k) {
        int n=v.length;
        Arrays.sort(v);
        for(int i=0;i<n;i++){
            if(v[i]>=k){
                return i;
            }
        }
        return 0;
    }
}