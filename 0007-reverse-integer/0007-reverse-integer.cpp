class Solution {
public:
    int reverse(int x) {
       int digit = 0;
       while(x){
           int last_digit = 0;
           last_digit = x % 10;
           if(digit>INT_MAX/10 || digit<INT_MIN/10) return 0;
           digit = digit*10 + last_digit;
           x = x/10;
       }
       return digit;
    }
};