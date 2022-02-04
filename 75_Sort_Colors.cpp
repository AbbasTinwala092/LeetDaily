class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int zeroes = 0;
        int ones = 0;
        int twoes = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==0)
                zeroes++;
            if(nums[i]==1)
                ones++;
            if(nums[i]==2)
                twoes++;
        }
        ones = ones+zeroes;
        twoes = twoes+ones;
        for(int j=0; j<zeroes; j++)
            nums[j]=0;
        for(int k=zeroes; k<ones; k++)
            nums[k]=1;
        for(int l=ones; l<twoes; l++)
            nums[l]=2;
    }
};

//Time==O(n)
