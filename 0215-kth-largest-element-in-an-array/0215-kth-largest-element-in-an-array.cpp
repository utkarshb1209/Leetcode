class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int> pq;
        for(auto q:v) pq.push(q);
        while(--k) pq.pop();
        return pq.top();
    }
};