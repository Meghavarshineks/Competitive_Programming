//Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

//We repeatedly make duplicate removals on S until we no longer can.

//Return the final string after all such duplicate removals have been made.  It is guaranteed the answer is unique.


class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> dup;
        dup.push(S[0]);
        for(int i=1;i<S.length();i++){
            if(!dup.empty() && S[i]==dup.top()) dup.pop();
            else dup.push(S[i]);
        }
        int n=dup.size();
        string output(n,'x');
        while(!dup.empty()){
            output[--n]=dup.top();
            dup.pop();
            }
        return output;
    }
};
