class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
      
//         int n=arr.size();
//         int i=0;
//         while(i<n){
//             int crrt=arr[i]-1;
//             if(arr[i]<=n && arr[i]>0 && arr[i]!=arr[crrt]){
//                 swap(arr[i],arr[crrt]);
//             }
//             else
//             i++;  }

//         // first element in the array which is not present in its correct                                position (index) is the answer

//         for(int j=0;j<size;j++){
//             if(arr[j]!=j+1)
//             return j+1;
//         }
//         return size+1;
        long long int n=a.size(),i=0;
        while(i<n){
             int c=a[i];
            if(a[i]>0) c--; 
            if(a[i]>0 && a[i]<=n && a[i]!=a[c]) swap(a[i],a[c]);
            else i++;
        }
        for(int j=0;j<n;j++){
            if(a[j]!=j+1)
            return j+1;
        }
        return n+1;
    }
};