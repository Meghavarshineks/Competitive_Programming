https://www.hackerearth.com/problem/algorithm/the-sum-of-triples/

//You have an array a composed of exactly n elements. Given a number x, determine whether or not a contains three elements for which the sum is exactly x.

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input;
    int x,k,i,j,p,flag=0;
    cin>> x;
    while(cin >>k){
        input.push_back(k);
    }
    int n=input.size();
    unordered_map<int,int> check_map;
    for(i=0;i<n;i++){
        if(check_map[input[i]]>=1){
            check_map[input[i]]+=1;
        }
        else{
            check_map[input[i]]=1;
        }
        
    }
    for(i=0;i<n-1;i++){
        p=input[i];
        
        for(j=i+1;j<n;j++)
            
            {int o=input[j];
            
        int c=x-p-o;
        if(check_map.find(c)!=check_map.end()){
            if(c!=p){
                
                if(c!=o){
                    //cout<<"true1";
                    flag=1;
                    break;
                
                }
                else{
                    if(check_map[c]>1){
                        //cout<<"true2";
                        flag=1;
                        break;
                        
                    }
                    
                }
            }
            else{
                if(check_map[p]>1){
                        //cout<<"true3";
                        flag=1;
                        break;
                        
            }
        }
    }
    //for (auto x : check_map) 
      //cout << x.first << " " << x.second << endl; 
    

    
        
}if(flag==1) {
        cout<< "true"<<endl;
        
        break;}
        
    }
if(flag==0) cout<< "false";
return 0;}
