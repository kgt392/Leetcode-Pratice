class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        vector<int> ls;
        int n =arr.size();
        int min =(int)(n/3)+1;
        map <int,int>mpp;
        for(int i =0;i<n;i++){
            mpp[arr[i]]++;
            if(mpp[arr[i]] == min){
                ls.push_back(arr[i]);
            }  
            if(ls.size()==2) break;
        }
        return ls;
    }
};