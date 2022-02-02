class Solution {
public:
    bool isPalindrome(long x) {
        long num = x;
        if(x<0)
                return false;
        
        long rev = 0;
        int last = 0;
        while(x!=0)
        {
            last = x%10;
            rev = rev*10 + last;
            x = x/10;
        }
        
        if(num == rev)
            return true;
        else 
            return false;
    }
};
