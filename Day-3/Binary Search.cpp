https://leetcode.com/problems/binary-search/

//Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. If target exists, then return its index, otherwise return -1.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len=nums.size();
        int low=0,high=len-1;
        int mid=0;
        int sol=-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                sol=mid;
                return mid;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return sol;
    }
};
