class Solution {
public:
    string reversePrefix(string w, char ch) {
        int n=w.size(),i;
        for(i=0;i<n;i++){
            if(ch==w[i]){
                break;
            }
        }
        if(i<n)
        reverse(w.begin(),w.begin()+i+1);
        return w;
    }
};