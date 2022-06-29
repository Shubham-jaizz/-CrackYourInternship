#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
 
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int fast =  nums[0],slow = nums[0];
        do{
           slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        fast = nums[0];
        while(slow!= fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
    
};
