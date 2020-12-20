https://leetcode.com/problems/number-of-good-pairs/

//Given an array of integers nums.

//A pair (i,j) is called good if nums[i] == nums[j] and i < j.

//Return the number of good pairs.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i,j,count=0;
        unordered_map<int,int> element_count;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(element_count.find(nums[i])!=element_count.end()){
                element_count[nums[i]]+=1;
            }
            else{
                element_count[nums[i]]=1;
            }
        }
        for(i=0;i<element_count.size();i++){
            
            int p=element_count[i];
            
            count+=((p-1)*p/2);
            
        }
        return count;
    }
}; 
