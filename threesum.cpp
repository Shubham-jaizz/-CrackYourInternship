class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        map<int,int>mpp;
        for(int i = 0;i<nums.size();i++){
           if(mpp.find(nums[i]) == mpp.end()){
               mpp[nums[i]]= i;
           }
        }
        for(auto it:mpp){
        int l  = it.second+1,r = nums.size()-1;
        while(l<r){
            if((nums[l]+nums[r])== -it.first){
                vector<int>ans;
                ans.push_back(nums[l]);
                ans.push_back(nums[r]);
                ans.push_back(it.first);
                v.push_back(ans);
                l++;r--;
                while( nums[l-1]==nums[l]&& l<r)l++;
                while( nums[r+1]==nums[r]&& l<r)r--;   
                
            }else if(nums[l]+nums[r]<-it.first){
                l++;
            }else{
                r--;
            }
        }
          
        }
        return v;
     
        
    }
};
