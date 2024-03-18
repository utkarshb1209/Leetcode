class Solution {
    public boolean isSubstringPresent(String s) {
        int n=s.length();
        int i=0;
        
        HashSet<String> st = new HashSet<>(); 
        for(i=1;i<n;i++){
            // String s1="";
            StringBuffer s1 = new StringBuffer();
            s1.append(s.charAt(i-1));
            // s1=s1+s[i];
            s1.append(s.charAt(i));
            st.add(s1.toString());
        }
        for(i=n-1;i>0;i--){
            // String s1="";
            StringBuffer s1 = new StringBuffer();
            // s1+=s[i];
            s1.append(s.charAt(i));
            // s1+=s[i-1];
            s1.append(s.charAt(i-1));
            if(st.contains(s1.toString())){
                return true;
            }
        }
        return false;
    }
}