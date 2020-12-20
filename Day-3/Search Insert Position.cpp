https://leetcode.com/problems/search-insert-position/

//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int num = nums.size();
        if (num == 0) return 0;
        if (nums[0] > target) return 0;
        if (nums[num - 1] < target) return num;
        
        int l = 0;
        int h = num - 1;
        int mid = l + (h - l) / 2;
        
        while (l < h) {
            mid = l + (h - l) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) h = mid;
            else l = mid + 1;
        }
        return l;
       
    }
};
