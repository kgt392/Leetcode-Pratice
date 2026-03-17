class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        for(int i =0;i<=n;i++){
               bool found = false;
            for(int j=0;j<n;j++){
                   if(arr[j] == i) {
                    found = true;
                    break;
                }
            }
           if(!found) return i;
        }
         return -1;
    }
};