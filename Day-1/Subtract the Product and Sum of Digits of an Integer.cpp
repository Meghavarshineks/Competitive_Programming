//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

//Given an integer number n, return the difference between the product of its digits and the sum of its digits.

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,rem;
        while(n>0){
            rem=n%10;
            n=n/10;
            product*=rem;
            sum+=rem;
        }
        return product-sum;
    }
};
