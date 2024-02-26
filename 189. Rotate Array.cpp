class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        revers(nums,0,n- 1);
        revers(nums,0,k-1);
        revers(nums,k,n-1);
    }
private:
    void revers(vector<int>& nums,int l, int r){
        while(l<r){
            swap(nums[l++],nums[r--]);
        }
    }
};
