class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0,one = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] == 0)zero++;
            else if(nums[i]==1)one++;
        }
        for(int i = 0;i<n;i++){
            if(i<zero){
                nums[i] = 0;
            }else if(i>=zero && i< (zero+one)){
                nums[i] = 1;
            }else{
                nums[i]= 2;
            }
        }
        
    }
};