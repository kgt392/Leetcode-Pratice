class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = arr.size();
    //     int temp[n];
    //     int k = 0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]!=0){
    //             temp[k] = nums[i];
    //             k++;
    //         }
    //     }
    //    while(k < n){
    //         temp[k] = 0;
    //         k++;
    //     }
    
    //     for(int i = 0; i < n; i++){
    //         nums[i] = temp[i];
    //         cout<<nums[i];
    //     }


// ======================


    // int j = -1;
    // for(int i =0;i<n;i++){
    //     if(arr[i] ==0){
    //         j=i;
    //         break;
    //     }
    // }

    // if (j == -1) return ;

    // for(int i =j+1;i<n;i++){
    //     if(arr[i] !=0){
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }
    //  for(int i = 0; i < n; i++){
    //         cout<<arr[i];
    //     }




     int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;}
    }
};