#include <stack>
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> s1;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                s1.push(s[i]);
            
            else if(s[i]==')' || s[i] == '}' || s[i]==']')
            {
                if(s1.empty())
                    return false;
                if(IsBalanced(s1.top(), s[i]))
                    s1.pop();
                else 
                    return false;
            }
            
        }
        
        if(s1.empty())
            return true;
        else 
            return false;
    }
    
    bool IsBalanced(char open, char close)
    {
        if(open=='(' && close==')')
            return true;
        else if(open=='{' && close=='}')
            return true;
        if(open=='[' && close==']')
            return true;
        
        else 
            return false;
    }
};
