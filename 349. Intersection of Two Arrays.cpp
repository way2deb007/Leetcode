class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i=0,j=0;
        int n=nums1.size();
        int m=nums2.size();

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());


        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                int size=ans.size();
                if(size==0){
                    ans.push_back(nums1[i]);
                    }
                else if(ans[size-1]!=nums1[i]){
                    ans.push_back(nums1[i]);
                    }
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
                }
            else{
                i++;
                }

            }
        return ans;
    }
};



Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
