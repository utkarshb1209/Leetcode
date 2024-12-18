class Solution {
public:
    string repeatLimitedString(string s, int n) {
        int n1=s.size();
        priority_queue<char> pq;
        map<char,int> m;
        for(auto q:s) m[q]++;
        for(auto y:m) pq.push(y.first);
        string ans;
        while(pq.size()){
            char c=pq.top();
            if(pq.size()==1 && m[c]>n) m[c]=n;
            pq.pop();
            if(m[c]>n){
                string hh(n,c);
                m[c]-=n;
                ans+=hh;
                if(pq.size()){
                    char g=pq.top();
                    m[g]-=1;
                    if(m[g]==0) pq.pop();
                    ans+=g;
                    // cout<<g<<" gg "<<m[g]<<endl;
                }
                // cout<<ans<<endl;
                // cout<<c<<" 5 "<<m[c]<<endl;
                
                pq.push(c);
            }
            else{
                // cout<<c<<" "<<m[c]<<endl;
                string hh(m[c],c);
                m[c]=0;
                ans+=hh;
                // cout<<ans<<endl;
            }
        }
        return ans;
        
    }
};