class Solution {
public:
    int strStr(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        for(int i=0;i<n1;i++){
            int x=i;
            int j=0;
            while(j<n2){
                if(s1[x]==s2[j]){
                    x++;j++;
                }
                else break;
            }
            if(j==n2) return i;
        }
        return -1;
    }
};