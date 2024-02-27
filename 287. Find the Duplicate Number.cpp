int findDuplicate(vector<int>& nums) {
        int r;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i+1]==nums[i]){
                r = nums[i];
                break;
            }
        }
        return r;
    }

#Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
#There is only one repeated number in nums, return this repeated number.
#You must solve the problem without modifying the array nums and uses only constant extra space.

#Example 1:

#Input: nums = [1,3,4,2,2]
#Output: 2
