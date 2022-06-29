class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int l  = 0,r = nums.size()-1;
        while(l<r){
            if((nums[l]+nums[r])== target){
                ans.push_back(nums[l]);
                ans.push_back(nums[r]);
                
            }else if(nums[l]+nums[r]<target){
                l++;
            }else{
                r--;
            }
        }
     
        return ans;
    }
      
    
};