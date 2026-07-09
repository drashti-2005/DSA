class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalsum=0;
        int sum=0;
        for(int i=1; i<=nums.size(); i++){
            totalsum+=i;
        }
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int miss=totalsum-sum;
        return miss;
    }
};