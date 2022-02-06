#include<vector>
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int r=nums.size() -1;
        int mid;
        
        while(l<r)
        {
            mid = (l+r)/2;
            if(nums[mid]>nums[mid+1])
                r = mid;
            else
                l=mid+1;
            
        }
        return l;
    }
};

//Above code have T=O(logN); S=O(1)

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return 0;
        if(n==2)
        {
            if(nums[0] < nums[1])
                return 1;
            else 
                return 0;
        }
        if(nums[0]>nums[1])
            return 0;
        for(int i=1; i<n-1; i++)
        {
            if(nums[i-1]<nums[i] && nums[i+1]<nums[i])
                return i;
        }
        return n-1;
    }
};

//Above code have T=O(N); S=O(1)
