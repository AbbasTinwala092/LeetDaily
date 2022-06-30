/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<stack>
#include<cstring>
#include<math.h>

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        vector<int> v1;
        while(head!=NULL)
        {
            v1.push_back(head->val);
            head = head->next;
        }
        
        int powr = v1.size()-1;
        int size = v1.size();
        for(int i=0; i<size; i++)
        {
            if(v1[i] == 1)
            {
                ans = ans + pow(2, powr);
                powr--;
            }
            else if(v1[i]==0)
                powr--;
        }
        
        return ans;
        
    }
    
};



//Time complexity:O(N).

//Space complexity:O(1).
