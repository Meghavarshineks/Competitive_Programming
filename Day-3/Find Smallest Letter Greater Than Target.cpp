https://leetcode.com/problems/find-smallest-letter-greater-than-target/

//Given a list of sorted characters letters containing only lowercase letters, and given a target letter target, find the smallest element in the list that is larger than the given target.

//Letters also wrap around. For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l = 0;
        int h = n;
        
        char output = letters[0];
        
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            
            if(letters[mid]<=target)
                l = mid+1;
            else
            {
                output = letters[mid];
                h = mid-1;
            }
        }
        
        return output;
    }
};
