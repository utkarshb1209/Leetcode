class Solution {
public:
    string replaceWords(vector<string>& d, string v) {
        set<string> st;
        int mx=0;
        string ans="",s="";
        for(auto p:d) {
            string x=p;
            int z=p.size();
            mx=max(mx,z);
            st.insert(p);
        }
        int f=1;
        for(int i=0;i<v.size();i++){
            if(v[i]==' '){
                ans+=s;
                ans+=' ';
                s="";
                f=1;
            }
            else{
                if(f==1){
                s+=v[i];
                if(s.size()<=mx && st.count(s)){
                    f=0;
                }
                }
            }
        }
        ans+=s;
        return ans;
    }
};