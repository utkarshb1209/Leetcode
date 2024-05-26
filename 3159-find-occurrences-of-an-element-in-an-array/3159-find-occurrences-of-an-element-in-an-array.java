class Solution {
    public int[] occurrencesOfElement(int[] a, int[] q, int x) {
        int n=a.length;
        int m=q.length;
        int[] ans=new int[m];
        Map<Integer, Integer> mp 
            = new HashMap<Integer, Integer>(); 
        int w=1;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                mp.put(w,i);
                w++;
            }
        }
        for(int i=0;i<m;i++){
            if(mp.containsKey(q[i])){
                int e=mp.get(q[i]).intValue();
                ans[i]=e;
            }
            else ans[i]=-1;
        }
        return ans;
    }
}