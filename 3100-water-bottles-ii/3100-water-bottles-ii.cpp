class Solution {
public:
    int maxBottlesDrunk(int v1, int v2) {
        int ans=0,x1=0,f;
        while(true){
            if(v1>0){
                ans+=v1;
                x1+=v1;
                v1=0;
            }
            f=0;
            while(x1>=v2){
                    x1-=v2;
                    v2++;
                v1++;
                f=1;
            }
            if(f==0) break;
        }
        return ans;
    }
};