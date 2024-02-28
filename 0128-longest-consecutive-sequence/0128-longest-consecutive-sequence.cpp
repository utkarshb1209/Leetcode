class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int n=v.size(),mx=0,c=1,f=0,m1;
        set<int> s;
        for(auto q:v) s.insert(q);
        for(auto q:s){
            if(f==0){
                f=1;
                m1=q;
                mx++;
            }
            else{
                if(q-m1==1) {
                    c++;
                    mx=max(mx,c);
                }
                else c=1;
                m1=q;
            }
        }
        return mx;
    }
};