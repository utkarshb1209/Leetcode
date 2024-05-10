class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        int n=v.size();
        int i=0,j=0;
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        while(i<k){
            pq.push({v[i],i});
            i++;
        }
        ans.push_back(pq.top().first);
        while(i<n){
            pq.push({v[i],i});
            // cout<<pq.top().second<<" "<<j<<" ";
            while(pq.top().second<=j) {
                pq.pop();
                // cout<<23456;
            }
            ans.push_back(pq.top().first);
            j++;i++;
        }
        return ans;
    }
};