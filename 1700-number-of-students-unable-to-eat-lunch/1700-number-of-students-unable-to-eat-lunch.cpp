class Solution {
public:
    int countStudents(vector<int>& v1, vector<int>& v2) {
        int n1=v1.size(),k=0,i=0;
        int n2=v2.size();
        queue<int> q;
        for(auto y:v1){
            q.push(y);
        }
        while(q.size()){
            if(q.front()==v2[i]){
                q.pop();
                i++;
                k=0;
            }
            else{
                q.push(q.front());
                q.pop();
                k++;
            }
            if(k==q.size()) return k;
        }
        return 0;
    }
};