#include <math.h>

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long long power = n;
        
        if(x == 1.0)
            return 1.0;
        
        if(power < 0)
            power = -1*power;
        
        while(power>0)
        {
            if(power%2==0)
            {
                x = x*x;
                power = power/2;
            }
            else if(power%2 == 1)
            {
                ans = ans*x;
                power--;
            }
        }
        
        if(n<0)
        {
            ans = 1.000 / ans;
        }
        return ans;
        
    }
};

//T=O(logN)
