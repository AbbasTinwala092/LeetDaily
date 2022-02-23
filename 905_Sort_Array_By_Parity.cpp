
//Using extra vector
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        if(nums.size() == 1)
            return nums;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==0)
                ans.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]%2==1)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};

//T = O(n)
//S = O(n)

//Without using extra vector

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        
        if(nums.size()<=1)
            return nums;
        
        while(start<end)
        {
            if(nums[start]%2==1 && nums[end]%2==1)
                end--;
            
            else if(nums[start]%2==1 && nums[end]%2==0)
            {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
            
            else if(nums[start]%2==0 && nums[end]%2==1)
            {
                end--;
                start++;
            }
            
            else if(nums[start]%2==0 && nums[end]%2==0)
                start++;
        }
        return nums;
    }
};

//T = O(n)
