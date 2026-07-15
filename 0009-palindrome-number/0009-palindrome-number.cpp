class Solution {
public:
    bool isPalindrome(long x) {
        long b = x;
        long rev=0;
        if(x<0){
            return false;
        }
        while(b>0){
            long num = b % 10;
            rev = rev*10 + num;
            b=b/10;
        }
        if(rev == x){
            return true;
        }
    return false;
        
        
    }
};