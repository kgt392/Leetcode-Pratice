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

        // ==========================
        // for(int i =0;i<n;i++){
        //     if(ls.size()==0 || ls[0] != arr[i]){
        //         int cnt=0;
        //         for(int j=0;j<n;j++){
        //             if(arr[j] == arr[i]){
        //                 cnt++;
        //             }
        //         }
        //         if(cnt> n/3){
        //             ls.push_back(arr[i]);
        //         }
        //     }
        //      if (ls.size()==2 ) break;
        // }
        // return ls;
    }
};