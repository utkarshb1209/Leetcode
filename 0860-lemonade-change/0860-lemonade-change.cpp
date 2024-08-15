class Solution {
public:
    bool lemonadeChange(vector<int>& v) {
        int n=v.size();
        int ans=0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            if(v[i]==5){
                m[v[i]]++;
            }
            else if(v[i]==10){
                if(m[5]==0){
                    return 0;
                }
                m[v[i]]++;
                m[5]--;
            }
            else{
                m[v[i]]++;
                if(m[5]==0) return 0;
                if(m[10]){
                    m[10]--;
                    m[5]--;
                }
                else{
                    if(m[5]<3) return 0;
                    m[5]=m[5]-3;
                }
            }
        }
        return 1;
    }
};