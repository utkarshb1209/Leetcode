class Solution {
public:
    bool isSubstringPresent(string s) {
        int n=s.size(),i;
        set<string> st;
        for(i=0;i<n-1;i++){
            string x=s.substr(i,2);
            st.insert(x);
        }
        for(i=n-1;i>0;i--){
            string x;
            x+=s[i];
            x+=s[i-1];
            if(st.count(x)){
                return 1;
            }
        }
        return 0;
    }
};