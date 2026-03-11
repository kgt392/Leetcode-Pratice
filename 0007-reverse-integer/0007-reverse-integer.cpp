// class Solution {
// public:
//     int reverse(long  x) {
//         long lastdigit,num=0 ,sign = 1;
//         if(x < 0){
//             sign = -1;
//             x = -x;   
//         }
//          while(x>0){
//             lastdigit = x%10;
//             num = num *10 +  lastdigit;
//             x= x/10;
//         }
//         return sign*num;
//     }
// };


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
