class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int no = 0;
        
        int multi = 1;
        int subs = 0;
        
        while(n>0)
        {
            no = n%10;
            
            multi = multi*no;
            subs = subs+no;
            
            n = n/10;
            
        }
       
        return multi-subs;
    }
};

//T=O(n)
//S=O(1)
