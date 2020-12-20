//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

//Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

//For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i;
        vector<bool> output;
        int max=candies[0];
        for(i=1;i<candies.size();i++){
            if(max<candies[i]){
                max=candies[i];
            }
        }
        for(i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=max){
                output.push_back(true);
            }
            else{
                output.push_back(false);
            }
        }
        return output;
    }
};
