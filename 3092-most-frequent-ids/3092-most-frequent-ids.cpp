class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& v, vector<int>& f) {
        map<long long,long long> m;
        priority_queue<pair<long long,long long>> pq;
        int i,n=v.size();
        vector<long long> ans;
        for(i=0;i<n;i++){
            if(f[i]<0){
                m[v[i]]+=f[i];
                if(v[i]==pq.top().second){
                    while(pq.top().first!=m[pq.top().second]){
                        long long  first = pq.top().first, second = pq.top().second;
                        
                        
                        pq.pop();
                        pq.push({m[second],second});
                    }
                    
                }
                ans.push_back(pq.top().first);
            }
            else{
            m[v[i]]+=f[i];
            pq.push({m[v[i]],v[i]});
            ans.push_back(pq.top().first);
            }
        }
        return ans;
        
        // m[3]=4 m[5]=2 m[5]=1 m[3]=-2 
        // 
    }
};