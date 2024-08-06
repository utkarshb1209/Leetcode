class Solution {
public:
    int minimumPushes(string w) {
        // map<char,int>
        vector<int> m(26);
        for(auto q:w){
            m[q-'a']++;
        }
        sort(m.begin(),m.end());
        int c=0;
        int ans=0;
        for(int i=25;i>=0;i--){
            c++;
            int x=((c-1)/8)+1;
            
            ans+=(x*m[i]);
        }
        return ans;
    }
};