//https://leetcode.com/problems/running-sum-of-1d-array/

//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

//Return the running sum of nums.

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,current,previous;
        
        for(i=1;i<nums.size();i++){
            current=nums[i];
            previous=nums[i-1];
            nums[i]=current+previous;
            
        }
        return nums;
    }
};
