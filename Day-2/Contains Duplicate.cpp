https://leetcode.com/problems/contains-duplicate/

//Given an array of integers, find if the array contains any duplicates.

//Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i,flag=0;
        unordered_map<int,int> duplicate;
        for(i=0;i<nums.size();i++){
            if(duplicate.find(nums[i])!=duplicate.end()) duplicate[nums[i]]+=1;
            else duplicate[nums[i]]=1;
        }
        for (auto x : duplicate) 
         if(x.second>=2) 
         {flag=1;
            return true;      }
        if(flag==0) 
        {return false;}
        else{
            return true; 
        }
    }
};
