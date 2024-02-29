int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c+=1;
            }
            else{
                c=0;
            }
            m=max(c,m);
        }
        return m;
    }
};

#Example 2:

#Input: nums = [1,0,1,1,0,1]
#Output: 2
