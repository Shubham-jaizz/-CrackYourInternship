class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int max = nums[0];
        int index = 1;
        int count = 1;
        for(int i =1 ;i<n;i++){
            if(nums[i] > max){
                nums[index] = nums[i];
                max =  nums[i];
                index++;
                count++;
            }
        }
        return count;
    }
};