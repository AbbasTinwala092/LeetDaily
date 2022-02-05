class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> lesser;
        
        for(int i=0; i<nums.size(); i++)
        {
            int counter = 0;
            for(int j=0; j<nums.size(); j++)
            {
                
                if(i==j)
                    continue;
                else if(nums[i] > nums[j])
                    counter++;
                    
            }
            lesser.push_back(counter);
        }
        
        return lesser;
        
    }
};
