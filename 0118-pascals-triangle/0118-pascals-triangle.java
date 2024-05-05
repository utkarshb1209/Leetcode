class Solution {
    public List<List<Integer>> generate(int n) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> firstRow = new ArrayList<>();
        firstRow.add(1);
        ans.add(firstRow);
        if(n==1){
            return ans;
        }
        for(int i=1;i<n;i++){
            List<Integer> a1 = new ArrayList<>();
            a1.add(1);
            for(int j=1;j<i;j++){
                a1.add(ans.get(i-1).get(j)+ans.get(i-1).get(j-1));
            }
            a1.add(1);
            ans.add(a1);
        }
        return ans;
    }
}