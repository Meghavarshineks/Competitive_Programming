https://leetcode.com/problems/fair-candy-swap/

//Alice and Bob have candy bars of different sizes: A[i] is the size of the i-th bar of candy that Alice has, and B[j] is the size of the j-th bar of candy that Bob has.

//Since they are friends, they would like to exchange one candy bar each so that after the exchange, they both have the same total amount of candy.  (The total amount of candy a person has is the sum of the sizes of candy bars they have.)

//Return an integer array ans where ans[0] is the size of the candy bar that Alice must exchange, and ans[1] is the size of the candy bar that Bob must exchange.

//If there are multiple answers, you may return any one of them.  It is guaranteed an answer exists.

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sum_a=0,sum_b=0;
        for(auto a: A){
            sum_a +=a;
        }
        for(auto b: B){
            sum_b +=b;
        }
        int price=(sum_a+sum_b)/2;
        
        unordered_set<int> b_check;
        for(auto b:B){
            b_check.insert(b);
        }
        vector<int> output;
        for(auto a:A){
            int candy_b=price-sum_a+a;
            if(b_check.find(candy_b)!=b_check.end()){
                output.push_back(a);
                output.push_back(candy_b);
                break;
            }
        }
        return output;
    }
    
};
