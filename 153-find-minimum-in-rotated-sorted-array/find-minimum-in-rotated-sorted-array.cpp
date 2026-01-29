class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int min=nums[0];
        while(l<=r){
            if(nums[l]<=min){
                min=nums[l];
                l++;
            }else{
                l++;

            }
        }
        return min;
    }
};