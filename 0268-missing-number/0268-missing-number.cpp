class Solution {
public:
    int missingNumber(vector<int>& arr) {
        
        // for(int i =0;i<=n;i++){
        //        bool found = false;
        //     for(int j=0;j<n;j++){
        //            if(arr[j] == i) {
        //             found = true;
        //             break;
        //         }
        //     }
        //    if(!found) return i;
        // }
        //  return -1;
        int n =arr.size();
        int sum = (n*(n+1))/2;
        int s2=0;
        for(int i =0;i<n;i++){
            s2+=arr[i];
        }
        return sum-s2;
    }
};