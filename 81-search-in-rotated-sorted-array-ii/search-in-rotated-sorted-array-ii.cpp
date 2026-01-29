class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;

        while(l<=r){
            if(nums[l]!=target){
                l++;
            }else{
                return true;
            }
        }
        return false;
    }
};