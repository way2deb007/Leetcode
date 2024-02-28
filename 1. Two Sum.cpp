    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>r;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j]==target)&&(i!=j)){
                    r.push_back(i);
                    r.push_back(j);
                    
                }
            }
            
        }
        return r;
    }
#Input: nums = [2,7,11,15], target = 9
#Output: [0,1]
#Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
