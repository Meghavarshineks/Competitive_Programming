https://leetcode.com/problems/first-bad-version/

//You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

//Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

//You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (n==1) return 1;
        int l=1,h=n,mid;
        int flag=0;
        while(l<=h){
             mid=l+(h-l)/2;
            if(isBadVersion(mid)==false){
                l=mid+1;
            }
            else if(isBadVersion(mid)==true){
                if(isBadVersion(mid-1)==false) {
                    flag=1;
                    return mid;
                    }
                else h=mid-1;
                
            }   
        }
        if(flag==1){
            return mid;
        }
        else return 0;
    }
};
