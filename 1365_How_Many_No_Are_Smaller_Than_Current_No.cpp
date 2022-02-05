class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> lesser;
        
        for(int i=0; i<nums.size(); i++)
        {
            int counter = 0;
            for(int j=0; j<nums.size(); j++)
            {
                
                if(i!=j && nums[i] > nums[j])
                    counter++;
                    
            }
            lesser.push_back(counter);
        }
        
        return lesser;
        
    }
};
//The above code have T=O(n^2); S=O(1)


/*
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> dup(nums);
        vector<int> lesser;
        int j=0;
        int counter = 0;
        
        sort(dup.begin(), dup.end());
        
        for(int i=0; i<nums.size(); i++)
        {
            j=0;
            counter = 0;
            while(nums[i]>dup[j])
            {
                counter++;
                j++;
            }
            lesser.push_back(counter);
        }
        return lesser;
        
    }
};
*/
//The above code have T=O(nlog(n)) (avg)
