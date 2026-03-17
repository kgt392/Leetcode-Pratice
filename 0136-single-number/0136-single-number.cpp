class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int XOR=0;
        int n=arr.size();
        for(int i =0;i<n;i++){
            XOR=XOR^arr[i];
        }
        return XOR;
    }
};