//https://leetcode.com/problems/hamming-distance/

//The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

//Given two integers x and y, calculate the Hamming distance.

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_value;
         int  count=0;
        xor_value=x^y;
        while(xor_value>0){
            if(xor_value%2==1){
                count++;
            }
            xor_value/=2;
        }
        return(count);
    }
};
