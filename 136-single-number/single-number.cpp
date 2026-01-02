class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=0;
       for(int val: nums){
            count^=val;
       } 
       return count;
    }
};