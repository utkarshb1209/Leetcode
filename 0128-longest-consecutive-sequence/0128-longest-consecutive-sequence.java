class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        set<int> st;
        int mx=0,c=1,f=0,x;
        if(v.size()==0) return 0;
        for(auto q:v) st.insert(q);
        for(auto q:st){
            if(f==0){
                f=1;
                x=q;
            }
            else{
                if(q-x==1) c++;
                else {
                    mx=max(mx,c);c=1;
                }
                x=q;
            }
        }
        mx=max(mx,c);
        return mx;
    }
};