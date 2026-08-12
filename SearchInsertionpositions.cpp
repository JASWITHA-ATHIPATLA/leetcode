class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        //  nums = [1,3,5,6], target = 7
        for(int i=0;i<n;i++){
            if(nums[i]==target)return i;
        }
        if(nums[0]>target) return 0; 
        for(int i=0;i<n-1;i++){
               if(target>nums[i] && target<nums[i+1]){
                return i+1;
               }
        }
        return n;
    }
};
