//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

//An input string is valid if:

//Open brackets must be closed by the same type of brackets.
//Open brackets must be closed in the correct order.


class Solution {
public:
    bool isValid(string s) {
        stack <char> bracket;
        
        int i=0,flag=0;
        for(i=0;i<s.length();i++){
            if(s[i]==')'){
                if(bracket.empty()) {
                    return false;
                    }
                else if(bracket.top()=='(') bracket.pop();
                else return false;
            }
            else if(s[i]=='(') bracket.push(s[i]);
            
            if(s[i]==']'){
                if(bracket.empty()) {
                    return false;
                    }
                else if(bracket.top()=='[') bracket.pop();
                else return false;
            }
            else if(s[i]=='[') bracket.push(s[i]);
            
            if(s[i]=='}'){
                if(bracket.empty()) {
                    return false;
                    }
                else if(bracket.top()=='{') bracket.pop();
                else return false;
            }
            else if(s[i]=='{') bracket.push(s[i]);
            
        }
        if(bracket.empty()) return true;
        else return false;
        
        
    }
};
