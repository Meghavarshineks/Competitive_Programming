https://leetcode.com/problems/single-number/

//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count_map;
        int i,k;
        for(i=0;i<nums.size();i++){
            if(count_map.find(nums[i])!=count_map.end()) {count_map[nums[i]]+=1;}
            else {count_map[nums[i]]=1;}
        }
        for (auto& it: count_map) {
                if(it.second==1){
                   k=it.first;
                }
        
            }
        return k;
    }
};
