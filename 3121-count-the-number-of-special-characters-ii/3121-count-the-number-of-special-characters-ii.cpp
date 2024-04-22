class Solution {
public:
    int numberOfSpecialChars(string s) {
        map<char,int> m;
        int i,c=0,n=s.size();
        for(i=0;i<n;i++){
            if(m[s[i]]==0){
            m[s[i]]=i+1;
            }
            else if(s[i]>='a' && s[i]<='z'){
                m[s[i]]=i+1;
            }
        }
        for(auto q:m){
            if(q.first >='a' && q.first<='z' && m[toupper(q.first)]>m[q.first]) c++;
        }
        return c;
    }
};