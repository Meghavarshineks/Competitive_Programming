https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

//Given an array nums of integers, return how many of them contain an even number of digits.
 
 class Solution {
public:
    int findNumbers(vector<int>& nums) {
        string s1;
        int i,count=0;
        for (i=0;i<nums.size();i++){
            s1=to_string(nums[i]);
            if((s1.size())%2==0) count++;
        }
        return count;
    }
};
