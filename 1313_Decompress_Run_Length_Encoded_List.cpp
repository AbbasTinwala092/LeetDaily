class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i=0;
        int j=1;
        vector<int> ans;
        while(i < nums.size())
        {
            for(int m=0; m<nums[i]; m++)
            {
                ans.push_back(nums[j]);
            }
            i = i+2;
            j = j+2;
        }
        return ans;
    }
};
