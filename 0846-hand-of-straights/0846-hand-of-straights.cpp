class Solution {
public:
    bool isNStraightHand(vector<int>& h, int s) {
        int n=h.size();
        if(n%s>0) return 0;
        map<int,int> m;
        for(auto y:h){
            m[y]++;
        }
        for(auto q:m){
            int w=q.first;
            while(m[w]>0){
            for(int i=0;i<s;i++){
                if(m[w+i]>0){
                    m[w+i]--;
                    cout<<w+i<<" ";
                }
                else{
                    cout<<w+i<<" end ";
                 return 0;
                }
            }
            }
        }
        return 1;
    }
};