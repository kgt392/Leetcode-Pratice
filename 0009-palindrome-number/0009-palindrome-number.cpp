class Solution {
public:
    bool isPalindrome(int x) {
        int lastdigit,num =0; 
        int digit =x;
        while (x>0){
        lastdigit = x%10;
        if(num > INT_MAX/10 || num < INT_MIN/10) return 0;
        num = num *10 + lastdigit;
        x=x/10;
    }
    if (num  == digit ){
        return true;
    }
    else{
        return false;
    }
    }
};