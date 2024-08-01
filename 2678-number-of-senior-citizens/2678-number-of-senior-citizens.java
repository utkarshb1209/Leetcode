class Solution {
    public int countSeniors(String[] d) {
        int n=d.length;
        int c=0;
        for(int i=0;i<n;i++){
            int x=(d[i].charAt(11)-'0')*10+(d[i].charAt(12)-'0');
            if(x>60) c++;
        }
        return c;
    }
}
