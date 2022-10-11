#include<iostream>
using namespace std;

//https://leetcode.com/problems/happy-number/submissions/

//Concept => using fast and slower algo 

class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        
        do{
            slow=findsq(slow);
            fast=findsq(findsq(fast));
        }while(fast!=slow);
        
        if(slow==1){
            return true;
        }
        else{
            return false;
        }
    }
    int findsq(int number){
        int ans=0;
        while(number>0){
            int rem=number%10;
            ans += rem*rem;
            number/=10;
        }
        return ans;
    }
};