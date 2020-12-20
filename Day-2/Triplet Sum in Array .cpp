https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0#

//Given an array A[] of N numbers and another number x, determine whether or not there exist three elements in A[] whose sum is exactly x.

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t>0) {
	    t--;
	    int n;
	    int x;
	    cin>>n;
	    cin>>x;
	    vector<int> input;
	    
	    for(int i=0;i<n;i++) {
	        int temp;
	        cin>>temp;
	        input.push_back(temp);
	    }
	    bool found = false;
	    for(int i=0;i<n-2;i++) {
	        unordered_set<int> c_numbers;
	        for(int j=i+1;j<n;j++) {
	            int a = input[i];
	            int b = input[j];
	            int a_plus_b = a + b;
	            int c = x-a_plus_b;
	            if(c_numbers.find(c)!=c_numbers.end()){
	               found=true;
	               break;
	            } else {
	                c_numbers.insert(b);
	            }
	        }
	        if(found) break;
	    }
	    if(found) {
	        cout<<1<<endl;
	    } else {
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}
