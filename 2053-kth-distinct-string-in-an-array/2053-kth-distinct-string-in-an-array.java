class Solution {
    public String kthDistinct(String[] v, int k) {
        HashMap<String,Integer> m=new HashMap<>();
        for(int i=0;i<v.length;i++){
            m.put(v[i],m.getOrDefault(v[i],0)+1);
        }
        for(int i=0;i<v.length;i++){
            if(m.get(v[i])==1){
                k--;
            }
            if(k==0){
                return v[i];
            }
        }
        return "";
    }
}